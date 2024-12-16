///  									NUMCONFIG	TIMEmini     TIMEmaxi	NBRmini		NBRmaxi		DISTANCE	AREA RADIUS 	Lateral SHIFT 	numChooseZombiesCategorie  
ref autoptr TIntArray data_Suspended =		{ 0,		100,		100,		0,			30 ,		2,			30,				0,					1 };			// 0 Suspended (don't modify this line)   

ref autoptr TIntArray data_CountrySide =	{ 1,		10,			15,			2,			4,			100,		3,				30,					1 };			// 1 DEFAULT (Countryside)

ref autoptr TIntArray data_SmallTwon =		{ 10,		10,			15,			2,			5,			100,		3,				30,					10 };			// 10 SmallTwon
ref autoptr TIntArray data_AverageTown =	{ 20,		10,			15,			3,			7,			100,		5,				30,					20 };			// 20 AverageTown
ref autoptr TIntArray data_BigTown =		{ 30,		10,			15,			5,			9,			100,		10,				30,					30 };			// 30 BigTown
ref autoptr TIntArray data_Building =		{ 40,		20,			20,			5,			7,			100,		10,				30,					40 };			// 40 Building
ref autoptr TIntArray data_Industial =		{ 50,		10,			15,			3,			4,			100,		5,				30,					50 };			// 50 Industial
ref autoptr TIntArray data_Military =		{ 60,		10,			15,			3,			6,			80,			5,				30,					60 };			// 60 Military (always focus)
ref autoptr TIntArray data_Fog =			{ 70,		0,			0,			0,			0,			0,			0,				0,					70 };			// 70 
ref autoptr TIntArray data_Prison =			{ 71,		5,			7,			3,			5,			60,			3,				30,					71 };			// 71 Prison (always focus)
ref autoptr TIntArray data_Marines =		{ 72,		0,			0,			0,			0,			0,			0,				0,					72 };			// 72 
ref autoptr TIntArray data_Bridge =			{ 73,		5,			7,			1,			2,			140,		2,				0,					60 };			// 73 Prison Bridge
ref autoptr TIntArray data_Config90 =		{ 90,		10,			10,			1,			1,			600,		200,			200,				90 };			// 90 Hunters aroud castles

/// Here you can configure your personnal dynamic spawn types
ref autoptr TIntArray data_Config91 =		{ 91,		0,			0,			0,			0,			0,			0,				0,					0 };			// 91 
ref autoptr TIntArray data_Config92 =		{ 92,		0,			0,			0,			0,			0,			0,				0,					0 };			// 92 
ref autoptr TIntArray data_Config93 =		{ 93,		0,			0,			0,			0,			0,			0,				0,					0 };			// 93 
ref autoptr TIntArray data_Config94 =		{ 94,		0,			0,			0,			0,			0,			0,				0,					0 };			// 94 
ref autoptr TIntArray data_Config95 =		{ 95,		0,			0,			0,			0,			0,			0,				0,					0 };			// 95 
ref autoptr TIntArray data_Config96 =		{ 96,		0,			0,			0,			0,			0,			0,				0,					0 };			// 96 
ref autoptr TIntArray data_Config97 =		{ 97,		0,			0,			0,			0,			0,			0,				0,					0 };			// 97 
ref autoptr TIntArray data_Config98 =		{ 98,		0,			0,			0,			0,			0,			0,				0,					0 };			// 98 

ref autoptr TIntArray data_Config99 =		{ 99,		7,			10,			2,			3,			80,			10,				40,					99 };			// 99 Toxic zones (always focus) (v1.14 update)

///  									NUMCONFIG	TIMEmini     TIMEmaxi	NBRmini		NBRmaxi		DISTANCE	AREA RADIUS 	Lateral SHIFT 	numChooseZombiesCategorie  

// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// look at ZombiesChooseCategories.c to choose numChooseZombiesCategorie number (use the number who is instead XXX of data_Horde_XXX_ZombiesCategories variable name)

// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// NUMCONFIG 	: !! don't modify !! it is used in ZombiesDynamicSpawnZones.c file

/// TIMEmini 		: Minumun Time (in seconds) between each dynamic spawn.    
/// TIMEmaxi 		: Maximum Time (in seconds) between each dynamic spawn.    
/// !!! if value "6" (coast factor) of RealTimeTweaks.json file is not set to 0, remember than the time here correspond to the extreme north west of the map  
/// For example if value "6" is set to 10 and you set time here to 20 seconds the real time on the coast will be around 32 seconds (10 correspond to +12 seconds on the coast)

/// NBRmini		: Minimum number of Z to spawn (!! this number will be multiply by the ratio "3" of the RealTimeTweaks.json file (if "3" = 50 => quantity spawned will be 50%, so you need double the quantities)
/// NBRmaxi		: Maximum number of Z to spawn (!! this number will be multiply by the ratio "3" of the RealTimeTweaks.json file (if "3" = 50 => quantity spawned will be 50%, so you need double the quantities)

/// DISTANCE	  : Distance to which the group spawn (!! must not be lower than 60 !!)
/// AREA RADIUS	  : The size of the zone in which the zeds will spawn
/// Lateral SHIFT : 0 => The group will spawn in front of the player, 10 => The group will spawn with a random lateral shift between 0 and 10 meters

/// numChooseZombiesCategorie : Choose the type of zombie to spawn (see ZombiesChooseCategories.c file and look for the number in variable name. For exemple variable name data_Horde_102_CastelCategories, 102 is the number to spawn Castle zeds categorie)
