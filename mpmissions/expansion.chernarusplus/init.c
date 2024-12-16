void main()
{
	
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 07, reset_day = 01;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}




class CustomMission: MissionServer
{
//This is the script to TP GMT to Trader
	override void Expansion_OnQuestCompletion(ExpansionQuest quest)
    {
     auto trace = EXTrace.Start(EXTrace.NAMALSKADVENTURE, this);   
        PlayerBase player = quest.GetPlayer();
        if (!player)
            return;
        
        switch (quest.GetQuestConfig().GetID())
        {
            //! Teleports the player after tuning-in quest with ID 1001 Destination Trader
            case 1001:
            {
                array<vector> teleportPositions1 = {"7403.7 15.2188 2268.64","7416 15.2188 2259.11"};
                vector ori1 = player.GetOrientation();
                DayZPlayerSyncJunctures.ExpansionTeleport(player, teleportPositions1.GetRandomElement(), ori1);
            }
            break;            
        
		//! Teleports the player after tuning-in quest with ID 1002 Destination GMT
            case 1002:
            {
                array<vector> teleportPositions2 = {"2989.55 342.098 7460.82", "2989.62 342.496 7483.88"};
                vector ori2 = player.GetOrientation();
                DayZPlayerSyncJunctures.ExpansionTeleport(player, teleportPositions2.GetRandomElement(), ori2);
            }
			break;
			//! Teleports the player after tuning-in quest with ID 1003 Destination Altar
            case 1003:
            {
                array<vector> teleportPositions3 = {"8168.96 474.052 9095.81", "8157.56 474.052 9087.04"};
                vector ori3 = player.GetOrientation();
                DayZPlayerSyncJunctures.ExpansionTeleport(player, teleportPositions3.GetRandomElement(), ori3);
            }
			break;
			//! Teleports the player after tuning-in quest with ID 1004 Destination Klen
            case 1004:
            {
                array<vector> teleportPositions4 = {"10969.2 232.79 11700.2", "10958.7 233.402 11690.6"};
                vector ori4 = player.GetOrientation();
                DayZPlayerSyncJunctures.ExpansionTeleport(player, teleportPositions4.GetRandomElement(), ori4);
            }
			break;
		}

        super.Expansion_OnQuestCompletion(quest);
    }


	

 //! Steve's code.
    protected int m_MoneyToAdd = 500; // money to add
	protected int m_MoneyAddTimer = 30; // time in minutes
    int m_MoneyInit_Single = 0; // on first player connect, sets to 1.
    
    void AddMoneyToActivePlayers()
    {
        array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);
        ExpansionMarketModule marketModule = ExpansionMarketModule.Cast(CF_ModuleCoreManager.Get(ExpansionMarketModule));
        if (marketModule)
        {
            foreach (Man player: players)
            {
                ExpansionMarketATM_Data playerATMData = marketModule.GetPlayerATMData(player.GetIdentity().GetId());
                if (!playerATMData)
                    continue;
                int currentATMMoney = playerATMData.GetMoney();
                int possibleDepositAmount = GetExpansionSettings().GetMarket().MaxDepositMoney - currentATMMoney;
                if (currentATMMoney + m_MoneyToAdd > GetExpansionSettings().GetMarket().MaxDepositMoney && possibleDepositAmount != 0) 
                {
                    playerATMData.AddMoney(possibleDepositAmount);
                    ExpansionNotification(new StringLocaliser("Payment"), new StringLocaliser("You have received a lower payout of %1 to your Bank account. Your Bank account is full!", possibleDepositAmount.ToString()), ExpansionIcons.GetPath("Exclamationmark"), COLOR_EXPANSION_NOTIFICATION_SUCCSESS, 7, ExpansionNotificationType.TOAST).Create(player.GetIdentity());
                }
                else
                {
                    playerATMData.AddMoney(m_MoneyToAdd);
                    ExpansionNotification(new StringLocaliser("Payment"), new StringLocaliser("You have received a payout of %1 to your Bank account.", m_MoneyToAdd.ToString()), ExpansionIcons.GetPath("Exclamationmark"), COLOR_EXPANSION_NOTIFICATION_SUCCSESS, 7, ExpansionNotificationType.TOAST).Create(player.GetIdentity());
                }
            }
        }
    }
	override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
  	{
		if (m_MoneyInit_Single == 0){
			m_MoneyInit_Single = 1;
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(AddMoneyToActivePlayers, m_MoneyAddTimer * 60000, true);
		}
      super.InvokeOnConnect(player, identity);               
    	} 
	//! Ends here

	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemClothing;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		itemClothing = player.FindAttachmentBySlotName( "Body" );
		if ( itemClothing )
		{
			SetRandomHealth( itemClothing );
			
			itemEnt = itemClothing.GetInventory().CreateInInventory( "BandageDressing" );
			if ( Class.CastTo( itemBs, itemEnt ) )
				itemBs.SetQuantity( 2 );

			string chemlightArray[] = { "Chemlight_White", "Chemlight_Yellow", "Chemlight_Green", "Chemlight_Red" };
			int rndIndex = Math.RandomInt( 0, 4 );
			itemEnt = itemClothing.GetInventory().CreateInInventory( chemlightArray[rndIndex] );
			SetRandomHealth( itemEnt );

			rand = Math.RandomFloatInclusive( 0.0, 1.0 );
			if ( rand < 0.35 )
				itemEnt = player.GetInventory().CreateInInventory( "Apple" );
			else if ( rand > 0.65 )
				itemEnt = player.GetInventory().CreateInInventory( "Pear" );
			else
				itemEnt = player.GetInventory().CreateInInventory( "Plum" );

			SetRandomHealth( itemEnt );
		}
		
		itemClothing = player.FindAttachmentBySlotName( "Legs" );
		if ( itemClothing )
			SetRandomHealth( itemClothing );
		
		itemClothing = player.FindAttachmentBySlotName( "Feet" );
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}