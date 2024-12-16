/// Here you can create / modify zombies categories (used in ZombiesChooseCategories.c file)

ref autoptr TStringArray Empty = {	}; // Don't modify this one

/// ////////////////////////////////
ref autoptr TStringArray Zombie_Type_Santa = { // (v1.15 update)
	"ZmbM_Santa",	
};
ref autoptr TStringArray Zombie_Type_NBC_Low = { // (v1.14 update)
	"ZmbM_NBC_Yellow",	
};
ref autoptr TStringArray Zombie_Type_NBC_Hight = { // (v1.14 update)
	"ZmbM_NBC_Grey",	
};

ref autoptr TStringArray Zombie_Type_AroundCastles = {
	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",
	"ZmbF_MilkMaidOld_Green",	
};

ref autoptr TStringArray Zombie_Type_Priest = {
	"ZmbM_priestPopSkinny",
};

ref autoptr TStringArray Zombie_Type_Butcher = {
	"ZmbM_DoctorFat",
};

ref autoptr TStringArray Zombie_Type_All = {	
	// Naked
	"ZmbM_HermitSkinny_Beige",
	"ZmbM_HermitSkinny_Black",
	"ZmbM_HermitSkinny_Green",
	"ZmbM_HermitSkinny_Red",

	// Skinny
	"ZmbF_CitizenBSkinny",

	"ZmbF_SkaterYoung_Brown",
	"ZmbF_SkaterYoung_Striped",
	"ZmbF_SkaterYoung_Violet",

	"ZmbF_MilkMaidOld_Beige",
	"ZmbF_MilkMaidOld_Black",
	"ZmbF_MilkMaidOld_Green",
	"ZmbF_MilkMaidOld_Grey",

	"ZmbM_PatientSkinny",

	////// Normals
	"ZmbM_FarmerFat_Beige",
	"ZmbM_FarmerFat_Blue",
	"ZmbM_FarmerFat_Brown",
	"ZmbM_FarmerFat_Green",

	"ZmbM_VillagerOld_Blue",
	"ZmbM_VillagerOld_Green",
	"ZmbM_VillagerOld_White",

	"ZmbF_VillagerOld_Blue",
	"ZmbF_VillagerOld_Green",
	"ZmbF_VillagerOld_Red",
	"ZmbF_VillagerOld_White",

	"ZmbF_SurvivorNormal_Blue",
	"ZmbF_SurvivorNormal_Orange",
	"ZmbF_SurvivorNormal_Red",
	"ZmbF_SurvivorNormal_White",

	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	"ZmbM_FishermanOld_Grey",
	"ZmbM_FishermanOld_Red",

	"ZmbF_CitizenANormal_Beige",
	"ZmbF_CitizenANormal_Brown",
	"ZmbF_CitizenANormal_Blue",

	"ZmbM_CitizenASkinny_Blue",
	"ZmbM_CitizenASkinny_Brown",
	"ZmbM_CitizenASkinny_Grey",
	"ZmbM_CitizenASkinny_Red",

	"ZmbM_CitizenBFat_Blue",
	"ZmbM_CitizenBFat_Red",
	"ZmbM_CitizenBFat_Green",

	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",
	"ZmbM_HikerSkinny_Yellow",

	"ZmbF_HikerSkinny_Blue",
	"ZmbF_HikerSkinny_Grey",
	"ZmbF_HikerSkinny_Green",
	"ZmbF_HikerSkinny_Red",

	/// "ZmbM_JournalistSkinny", //(sound bug if you use Dark Horde mod)

	"ZmbF_JournalistNormal_Blue",
	"ZmbF_JournalistNormal_Green",
	"ZmbF_JournalistNormal_Red",
	"ZmbF_JournalistNormal_White",

	"ZmbM_CommercialPilotOld_Blue",
	"ZmbM_CommercialPilotOld_Olive",
	"ZmbM_CommercialPilotOld_Brown",
	"ZmbM_CommercialPilotOld_Grey",

	"ZmbM_JoggerSkinny_Blue",
	"ZmbM_JoggerSkinny_Green",
	"ZmbM_JoggerSkinny_Red",

	"ZmbF_JoggerSkinny_Blue",
	"ZmbF_JoggerSkinny_Brown",
	"ZmbF_JoggerSkinny_Green",
	"ZmbF_JoggerSkinny_Red",

	"ZmbM_MotobikerFat_Beige",
	"ZmbM_MotobikerFat_Black",
	"ZmbM_MotobikerFat_Blue",

	"ZmbM_SkaterYoung_Blue",
	"ZmbM_SkaterYoung_Brown",
	"ZmbM_SkaterYoung_Green",
	"ZmbM_SkaterYoung_Grey",

	"ZmbF_BlueCollarFat_Blue",
	"ZmbF_BlueCollarFat_Green",
	"ZmbF_BlueCollarFat_Red",
	"ZmbF_BlueCollarFat_White",

	"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Grey",
	"ZmbM_ClerkFat_Khaki",
	"ZmbM_ClerkFat_White", // white

	"ZmbF_Clerk_Normal_Blue",
	"ZmbF_Clerk_Normal_White",
	"ZmbF_Clerk_Normal_Green",
	"ZmbF_Clerk_Normal_Red",

	"ZmbF_ClerkFat_Black",
	"ZmbF_ClerkFat_GreyPattern",
	"ZmbF_ClerkFat_BluePattern",
	"ZmbF_ClerkFat_White",

	// Workers - Normals
	"ZmbF_MechanicNormal_Beige",
	"ZmbF_MechanicNormal_Green",
	"ZmbF_MechanicNormal_Grey",
	"ZmbF_MechanicNormal_Orange",

	"ZmbM_MechanicSkinny_Blue",
	"ZmbM_MechanicSkinny_Grey",
	"ZmbM_MechanicSkinny_Green",
	"ZmbM_MechanicSkinny_Red",

	"ZmbM_ConstrWorkerNormal_Beige",
	"ZmbM_ConstrWorkerNormal_Black",
	"ZmbM_ConstrWorkerNormal_Green",
	"ZmbM_ConstrWorkerNormal_Grey",

	"ZmbM_HandymanNormal_Beige",
	"ZmbM_HandymanNormal_Blue",
	"ZmbM_HandymanNormal_Green",
	"ZmbM_HandymanNormal_Grey",
	"ZmbM_HandymanNormal_White",

	//Workers-Strong
	"ZmbM_HeavyIndustryWorker",

	"ZmbM_OffshoreWorker_Green",
	"ZmbM_OffshoreWorker_Orange",
	"ZmbM_OffshoreWorker_Red",
	"ZmbM_OffshoreWorker_Yellow",

	// Medic - Normals
	"ZmbF_DoctorSkinny",
	"ZmbF_NurseFat",
	/// "ZmbF_PatientOld", //(sound bug if you use Dark Horde mod)

	//Medic-Strongs
	"ZmbM_ParamedicNormal_Blue",
	"ZmbM_ParamedicNormal_Green",
	"ZmbM_ParamedicNormal_Red",
	"ZmbM_ParamedicNormal_Black",

	"ZmbF_ParamedicNormal_Blue",
	"ZmbF_ParamedicNormal_Green",
	"ZmbF_ParamedicNormal_Red",

	//Strongs 
	"ZmbM_PrisonerSkinny",
	"ZmbM_FirefighterNormal",

	// Slow
	"ZmbM_Jacket_beige",
	"ZmbM_Jacket_black",
	"ZmbM_Jacket_blue",
	"ZmbM_Jacket_bluechecks",
	"ZmbM_Jacket_brown",
	"ZmbM_Jacket_greenchecks",
	"ZmbM_Jacket_grey",
	"ZmbM_Jacket_khaki",
	"ZmbM_Jacket_magenta",
	"ZmbM_Jacket_stripes",

	"ZmbF_ShortSkirt_beige",
	"ZmbF_ShortSkirt_black",
	"ZmbF_ShortSkirt_brown",
	"ZmbF_ShortSkirt_green",
	"ZmbF_ShortSkirt_grey",
	"ZmbF_ShortSkirt_checks",
	"ZmbF_ShortSkirt_red",
	"ZmbF_ShortSkirt_stripes",
	"ZmbF_ShortSkirt_white",
	"ZmbF_ShortSkirt_yellow",

	// Police
	"ZmbM_PolicemanFat",

	"ZmbF_PoliceWomanNormal",

	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",
	"ZmbM_HunterOld_Winter",

	// Military
	"ZmbM_PolicemanSpecForce",
	"ZmbM_PolicemanSpecForce_Heavy",

	"ZmbM_SoldierNormal",
	"ZmbM_usSoldier_Heavy_Woodland",
	"ZmbM_usSoldier_Officer_Desert"

	"ZmbM_usSoldier_normal_Woodland",
	"ZmbM_usSoldier_normal_Desert",

	"ZmbM_PatrolNormal_PautRev",
	"ZmbM_PatrolNormal_Autumn",
	"ZmbM_PatrolNormal_Flat",
	"ZmbM_PatrolNormal_Summer",

	//Specials
	"ZmbM_DoctorFat",
	"ZmbM_priestPopSkinny",	
};

ref autoptr TStringArray Zombie_Type_Forest_Low = {
	"ZmbM_HermitSkinny_Beige",
	"ZmbM_HermitSkinny_Black",
	"ZmbM_HermitSkinny_Green",
	"ZmbM_HermitSkinny_Red",
};
ref autoptr TStringArray Zombie_Type_Forest_Medium = {
	"ZmbF_MilkMaidOld_Green",
	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Red",
	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Red",
};
ref autoptr TStringArray Zombie_Type_Forest_Hight = {
	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",
};

ref autoptr TStringArray Zombie_Type_HolidayCamp_Low = {
	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	"ZmbM_FishermanOld_Grey",
	"ZmbM_FishermanOld_Red",

	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",
	"ZmbM_HikerSkinny_Yellow",

	"ZmbF_HikerSkinny_Blue",
	"ZmbF_HikerSkinny_Grey",
	"ZmbF_HikerSkinny_Green",
	"ZmbF_HikerSkinny_Red",
};
ref autoptr TStringArray Zombie_Type_HolidayCamp_Hight = {
	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",

	"ZmbM_OffshoreWorker_Green",
	
	"BearTrap",
};

ref autoptr TStringArray Zombie_Type_Castle_Low = {
	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	"ZmbM_FishermanOld_Grey",
	"ZmbM_FishermanOld_Red",
};
ref autoptr TStringArray Zombie_Type_Castle_Hight = {
	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",
	
	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",
	
	"BearTrap",
};


ref autoptr TStringArray Zombie_Type_SmallTown_Low = {
	"ZmbF_MilkMaidOld_Beige",
	"ZmbF_MilkMaidOld_Black",
	"ZmbF_MilkMaidOld_Green",
	"ZmbF_MilkMaidOld_Grey",

	"ZmbM_FarmerFat_Beige",
	"ZmbM_FarmerFat_Blue",
	"ZmbM_FarmerFat_Brown",
	"ZmbM_FarmerFat_Green",

	"ZmbF_JournalistNormal_Blue",
	"ZmbF_JournalistNormal_Green",
	"ZmbF_JournalistNormal_Red",
	"ZmbF_JournalistNormal_White",

	"ZmbM_JoggerSkinny_Blue",
	"ZmbM_JoggerSkinny_Green",
	//"ZmbM_JoggerSkinny_Red",

	"ZmbF_JoggerSkinny_Blue",
	"ZmbF_JoggerSkinny_Brown",
	"ZmbF_JoggerSkinny_Green",
	//"ZmbF_JoggerSkinny_Red",
};
ref autoptr TStringArray Zombie_Type_SmallTown_Hight = {
	"ZmbM_MotobikerFat_Beige",
	"ZmbM_MotobikerFat_Black",
	"ZmbM_MotobikerFat_Blue",
};

ref autoptr TStringArray Zombie_Type_AverageTown_Low = {
	"ZmbF_CitizenBSkinny",

	"ZmbF_SkaterYoung_Brown",
	"ZmbF_SkaterYoung_Striped",
	"ZmbF_SkaterYoung_Violet",

	"ZmbM_VillagerOld_Blue",
	"ZmbM_VillagerOld_Green",
	"ZmbM_VillagerOld_White",

	"ZmbF_VillagerOld_Blue",
	"ZmbF_VillagerOld_Green",
	"ZmbF_VillagerOld_Red",
	"ZmbF_VillagerOld_White",

	"ZmbF_SurvivorNormal_Blue",
	"ZmbF_SurvivorNormal_Orange",
	"ZmbF_SurvivorNormal_Red",
	"ZmbF_SurvivorNormal_White",

	"ZmbM_CitizenBFat_Blue",
	"ZmbM_CitizenBFat_Red",
	"ZmbM_CitizenBFat_Green",

	"ZmbF_JournalistNormal_Blue",
	"ZmbF_JournalistNormal_Green",
	"ZmbF_JournalistNormal_Red",
	"ZmbF_JournalistNormal_White",

	"ZmbM_JoggerSkinny_Blue",
	"ZmbM_JoggerSkinny_Green",
	"ZmbM_JoggerSkinny_Red",

	"ZmbF_JoggerSkinny_Blue",
	"ZmbF_JoggerSkinny_Brown",
	"ZmbF_JoggerSkinny_Green",
	"ZmbF_JoggerSkinny_Red",

	"ZmbM_SkaterYoung_Blue",
	"ZmbM_SkaterYoung_Brown",
	"ZmbM_SkaterYoung_Green",
	"ZmbM_SkaterYoung_Grey",

	"ZmbM_SkaterYoung_Blue",
	"ZmbM_SkaterYoung_Brown",
	"ZmbM_SkaterYoung_Green",
	"ZmbM_SkaterYoung_Grey",

	"ZmbM_Jacket_greenchecks",
	"ZmbM_Jacket_grey",
	"ZmbM_Jacket_khaki",
	"ZmbM_Jacket_magenta",
	"ZmbM_Jacket_stripes",

	"ZmbF_ShortSkirt_checks",
	"ZmbF_ShortSkirt_red",
	"ZmbF_ShortSkirt_stripes",
	"ZmbF_ShortSkirt_white",
	"ZmbF_ShortSkirt_yellow",
};
ref autoptr TStringArray Zombie_Type_AverageTown_Hight = {
	"ZmbM_CommercialPilotOld_Blue",
	"ZmbM_CommercialPilotOld_Olive",
	"ZmbM_CommercialPilotOld_Brown",
	"ZmbM_CommercialPilotOld_Grey",
};

ref autoptr TStringArray Zombie_Type_BigTown_Low = {

	"ZmbF_CitizenBSkinny",

	"ZmbF_SkaterYoung_Brown",
	"ZmbF_SkaterYoung_Striped",
	"ZmbF_SkaterYoung_Violet",

	"ZmbF_SurvivorNormal_Blue",
	"ZmbF_SurvivorNormal_Orange",
	"ZmbF_SurvivorNormal_Red",
	"ZmbF_SurvivorNormal_White",

	"ZmbF_CitizenANormal_Beige",
	"ZmbF_CitizenANormal_Brown",
	"ZmbF_CitizenANormal_Blue",

	"ZmbM_CitizenASkinny_Blue",
	"ZmbM_CitizenASkinny_Brown",
	"ZmbM_CitizenASkinny_Grey",
	"ZmbM_CitizenASkinny_Red",

	"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Grey",
	"ZmbM_ClerkFat_Khaki",

	"ZmbF_Clerk_Normal_Blue",
	"ZmbF_Clerk_Normal_White",
	"ZmbF_Clerk_Normal_Green",
	"ZmbF_Clerk_Normal_Red",
	
	"ZmbF_ClerkFat_Black",
	"ZmbF_ClerkFat_GreyPattern",
	"ZmbF_ClerkFat_BluePattern",
	"ZmbF_ClerkFat_White",
};
ref autoptr TStringArray Zombie_Type_BigTown_Hight = {
	"ZmbM_PolicemanFat",
	"ZmbF_PoliceWomanNormal",
};


ref autoptr TStringArray Zombie_Type_Hospital_Low = {
	"ZmbM_PatientSkinny",
	"ZmbF_NurseFat",
};
ref autoptr TStringArray Zombie_Type_Hospital_Hight = {
	"ZmbM_ParamedicNormal_Blue",
	"ZmbM_ParamedicNormal_Red",

	"ZmbF_ParamedicNormal_Blue",
	"ZmbF_ParamedicNormal_Red",
};

ref autoptr TStringArray Zombie_Type_Dispensaire_Low = {
	"ZmbM_PatientSkinny",
	"ZmbF_DoctorSkinny",
};
ref autoptr TStringArray Zombie_Type_Dispensaire_Hight = {
	"ZmbM_ParamedicNormal_Green",
	"ZmbF_ParamedicNormal_Green",
};


ref autoptr TStringArray Zombie_Type_Police_Low = {
	"ZmbM_PolicemanFat",
	"ZmbF_PoliceWomanNormal",
};
ref autoptr TStringArray Zombie_Type_Police_Hight = {
	"ZmbM_PolicemanSpecForce",
	"ZmbM_PolicemanSpecForce_Heavy",
};

ref autoptr TStringArray Zombie_Type_Tentes_Low = {
	"ZmbM_PatrolNormal_PautRev",
	"ZmbM_PatrolNormal_Autumn",
	"ZmbM_PatrolNormal_Flat",
	"ZmbM_PatrolNormal_Summer",
};
ref autoptr TStringArray Zombie_Type_Tentes_Hight = {
	"ZmbM_SoldierNormal",
	"ZmbM_usSoldier_Heavy_Woodland",
};

ref autoptr TStringArray Zombie_Type_MilitaryeBase_Low = {
	"ZmbM_usSoldier_normal_Woodland",
	"ZmbM_usSoldier_normal_Desert",
};
ref autoptr TStringArray Zombie_Type_MilitaryeBase_Hight = {
	"ZmbM_SoldierNormal",
	"ZmbM_usSoldier_Officer_Desert",
};

ref autoptr TStringArray Zombie_Type_MilitaryeBase_Other = {
	"ZmbM_ParamedicNormal_Green",
	"ZmbF_ParamedicNormal_Green",
	
	"ZmbM_PolicemanFat",
	"ZmbF_PoliceWomanNormal",
	
	"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Grey",
	"ZmbM_ClerkFat_Khaki",

	"ZmbF_Clerk_Normal_Blue",
	"ZmbF_Clerk_Normal_White",
	"ZmbF_Clerk_Normal_Green",
	
	"ZmbM_PolicemanSpecForce",
	"ZmbM_PolicemanSpecForce_Heavy",
	
	"ZmbM_PatrolNormal_PautRev",
	"ZmbM_PatrolNormal_Autumn",
	"ZmbM_PatrolNormal_Flat",
	"ZmbM_PatrolNormal_Summer",
	
	"ZmbM_HeavyIndustryWorker",
	"ZmbM_ParamedicNormal_Black",
	"ZmbM_FirefighterNormal",
};


ref autoptr TStringArray Zombie_Type_Industrial_Low = {

	"ZmbF_BlueCollarFat_White",
	"ZmbM_MechanicSkinny_Grey",

	"ZmbF_MechanicNormal_Beige",

	"ZmbM_ConstrWorkerNormal_Beige",
	"ZmbM_ConstrWorkerNormal_Black",
	"ZmbM_ConstrWorkerNormal_Green",
	"ZmbM_ConstrWorkerNormal_Grey",

	"ZmbM_HandymanNormal_Beige",
	"ZmbM_HandymanNormal_Blue",
	"ZmbM_HandymanNormal_Green",
	"ZmbM_HandymanNormal_Grey",
	"ZmbM_HandymanNormal_White",
};
ref autoptr TStringArray Zombie_Type_Industrial_Hight = {
	"ZmbM_HeavyIndustryWorker",
};

ref autoptr TStringArray Zombie_Type_GazStation_Low = {
	"ZmbF_BlueCollarFat_Blue",
	"ZmbF_BlueCollarFat_Green",
	"ZmbF_BlueCollarFat_Red",

	"ZmbM_MechanicSkinny_Blue",
	"ZmbM_MechanicSkinny_Green",
	"ZmbM_MechanicSkinny_Red",
};
ref autoptr TStringArray Zombie_Type_GazStation_Hight = {
	"ZmbM_FirefighterNormal",
};


ref autoptr TStringArray Zombie_Type_FicherMen_Low = {
	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	"ZmbM_FishermanOld_Grey",
	"ZmbM_FishermanOld_Red",
};
ref autoptr TStringArray Zombie_Type_FicherMen_Hight = {
	"ZmbM_OffshoreWorker_Green",
	"ZmbM_OffshoreWorker_Orange",
	"ZmbM_OffshoreWorker_Red",
	"ZmbM_OffshoreWorker_Yellow",
};

ref autoptr TStringArray Zombie_Type_Riffy_Low = {
	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",
	"ZmbM_HikerSkinny_Yellow",
};
ref autoptr TStringArray Zombie_Type_Riffy_Hight = {
	"ZmbM_OffshoreWorker_Green",
	"ZmbM_OffshoreWorker_Orange",
	"ZmbM_OffshoreWorker_Red",
	"ZmbM_OffshoreWorker_Yellow",
};


ref autoptr TStringArray Zombie_Type_SchoolStudents = {
	"ZmbF_CitizenBSkinny",

	"ZmbF_SkaterYoung_Brown",
	"ZmbF_SkaterYoung_Striped",
	"ZmbF_SkaterYoung_Violet",

	"ZmbM_SkaterYoung_Blue",
	"ZmbM_SkaterYoung_Brown",
	"ZmbM_SkaterYoung_Green",
	"ZmbM_SkaterYoung_Grey",
};
ref autoptr TStringArray Zombie_Type_SchoolTeacher = {
	"ZmbF_MilkMaidOld_Beige",
	"ZmbM_MotobikerFat_Black",
};


ref autoptr TStringArray Zombie_Type_PrisonPrisoner = {
	"ZmbM_PrisonerSkinny",
};
ref autoptr TStringArray Zombie_Type_PrisonGuardians = {
	"ZmbM_PolicemanFat",
	"ZmbF_PoliceWomanNormal",
};

ref autoptr TStringArray Zombie_Type_Slow1 = {
	"ZmbM_Jacket_beige",
	"ZmbM_Jacket_black",
	"ZmbM_Jacket_blue",
	"ZmbM_Jacket_bluechecks",
	"ZmbM_Jacket_brown",

	"ZmbF_ShortSkirt_beige",
	"ZmbF_ShortSkirt_black",
	"ZmbF_ShortSkirt_brown",
	"ZmbF_ShortSkirt_green",
	"ZmbF_ShortSkirt_grey",
};
ref autoptr TStringArray Zombie_Type_Slow2 = {
	"ZmbM_Jacket_greenchecks",
	"ZmbM_Jacket_grey",
	"ZmbM_Jacket_khaki",
	"ZmbM_Jacket_magenta",
	"ZmbM_Jacket_stripes",

	"ZmbF_ShortSkirt_checks",
	"ZmbF_ShortSkirt_red",
	"ZmbF_ShortSkirt_stripes",
	"ZmbF_ShortSkirt_white",
	"ZmbF_ShortSkirt_yellow",
};


ref autoptr TStringArray Zombie_Type_FireFighter = {
	"ZmbM_HeavyIndustryWorker",
	"ZmbM_ParamedicNormal_Black",
	"ZmbM_FirefighterNormal",
};

ref autoptr TStringArray Zombie_Type_Airstrip = {
	"ZmbM_CommercialPilotOld_Blue",
	"ZmbM_CommercialPilotOld_Olive",
	"ZmbM_CommercialPilotOld_Brown",
	"ZmbM_CommercialPilotOld_Grey",

	"ZmbM_HandymanNormal_Beige",
	"ZmbM_ConstrWorkerNormal_Beige",

	"ZmbM_Jacket_greenchecks",
	"ZmbM_Jacket_grey",
	"ZmbM_Jacket_khaki",
	"ZmbM_Jacket_magenta",
	"ZmbM_Jacket_stripes",

	"ZmbF_ShortSkirt_checks",
	"ZmbF_ShortSkirt_red",
	"ZmbF_ShortSkirt_stripes",
	"ZmbF_ShortSkirt_white",
	"ZmbF_ShortSkirt_yellow",
};


/// if you spawn wolves they will not have group behavious
ref autoptr TStringArray Wolves = {
	"Animal_CanisLupus_White",
	"Animal_CanisLupus_Grey",
};

ref autoptr TStringArray Grenades = {
	"RGD5Grenade",
	"M67Grenade",
	"M18SmokeGrenade_Red",
	"M18SmokeGrenade_Green",
	"M18SmokeGrenade_Yellow",
	"M18SmokeGrenade_Purple",
	"M18SmokeGrenade_White",
	"RDG2SmokeGrenade_Black",
	"RDG2SmokeGrenade_White",
	"FlashGrenade",	
}; 

/// be careful with smoke grenade, the smoke never disappear (can cause client side performance issues).
ref autoptr TStringArray SmokeGrenades = {
	"M18SmokeGrenade_Red",
	"M18SmokeGrenade_Green",
	"M18SmokeGrenade_Yellow",
	"M18SmokeGrenade_Purple",
	"M18SmokeGrenade_White",
	"RDG2SmokeGrenade_Black",
	"RDG2SmokeGrenade_White",
}; 

ref autoptr TStringArray Chemlights = {
	"Chemlight_Blue",
	"Chemlight_Green",
	"Chemlight_Red",
	"Chemlight_White",
	"Chemlight_Yellow",
	"Roadflare",
}; 

ref autoptr TStringArray Torches = {
	"Torch",
}; 

/// PSR2 available only if you use Plague_NewZombie_Pack mod (just check the model you want to use is not bug, this mod is work in progress)
ref autoptr TStringArray PSR2 = {
	"PSR2_ZmbM_Zubastik",
	"PSR2_ZmbM_Zubastik1",
	"PSR2_ZmbM_Zubastik2",
	"PSR2_ZmbM_Krovosos",
	"PSR2_ZmbM_Krovosos_Black",
};


/// Tests ///
ref autoptr TStringArray CastleTestStatic1 = {
	/*"ZmbM_LivenTest_01",
	"ZmbM_LivenTest_02",
	"ZmbM_LivenTest_03",
	"ZmbM_LivenTest_04",
	"ZmbM_LivenTest_05",
	"ZmbM_LivenTest_06",
	"ZmbM_LivenTest_07",
	"ZmbM_LivenTest_08",
	"ZmbM_LivenTest_09",
	"ZmbM_LivenTest_10",*/
	
	"ZmbM_LivenTest_02",
};
ref autoptr TStringArray CastleTestStatic2 = {
	/*"ZmbM_LivenTest_01",
	"ZmbM_LivenTest_02",
	"ZmbM_LivenTest_03",
	"ZmbM_LivenTest_04",
	"ZmbM_LivenTest_05",
	"ZmbM_LivenTest_06",
	"ZmbM_LivenTest_07",
	"ZmbM_LivenTest_08",
	"ZmbM_LivenTest_09",
	"ZmbM_LivenTest_10",*/
	
	"ZmbM_LivenTest_03",
};	
ref autoptr TStringArray CastleTestStatic3 = {
	/*"ZmbM_LivenTest_01",
	"ZmbM_LivenTest_02",
	"ZmbM_LivenTest_03",
	"ZmbM_LivenTest_04",
	"ZmbM_LivenTest_05",
	"ZmbM_LivenTest_06",
	"ZmbM_LivenTest_07",
	"ZmbM_LivenTest_08",
	"ZmbM_LivenTest_09",
	"ZmbM_LivenTest_10",*/

	"Chemlight_Red",
	"Chemlight_Red",
	"Chemlight_Red",
	"Chemlight_Yellow",	
	"Chemlight_Red",
	"Chemlight_Yellow",	
	//"Chemlight_Yellow",	
	//"Chemlight_Yellow",	
	
	"Torch",
	
	"M18SmokeGrenade_Red",
	"M18SmokeGrenade_Red",
	//"M18SmokeGrenade_Yellow",
	"RDG2SmokeGrenade_Black",
	"RDG2SmokeGrenade_Black",
};

ref autoptr TStringArray CastleTestDynamic1 = {
	"Torch",
	//"Chemlight_Blue",
	//"Chemlight_Green",
	"Chemlight_Red",
	"Chemlight_Red",
	"Chemlight_Red",
	//"Chemlight_White",
	"Chemlight_Yellow",	
	"Chemlight_Yellow",	
	"Chemlight_Yellow",	
};
ref autoptr TStringArray CastleTestDynamic2 = {
	"M18SmokeGrenade_Red",
	//"M18SmokeGrenade_Green",
	//"M18SmokeGrenade_Yellow",
	//"M18SmokeGrenade_Purple",
	//"M18SmokeGrenade_White",
	"RDG2SmokeGrenade_Black",
	//"RDG2SmokeGrenade_White",
};
ref autoptr TStringArray CastleTestDynamic3 = {
	"ZmbM_LivenTest_02",
};

ref autoptr TStringArray SlowTest = {
	"ZmbM_LivenTest_04",
};

ref autoptr TStringArray PartSystems = {
	"PvZ_Fog",
};

ref autoptr TStringArray Zombie_Type_Church = {
	"ZmbF_CitizenANormal_Beige",
	//"ZmbF_CitizenANormal_Brown",
	"ZmbF_CitizenANormal_Blue",

	"ZmbM_CitizenASkinny_Blue",
	//"ZmbM_CitizenASkinny_Brown",
	"ZmbM_CitizenASkinny_Grey",
	"ZmbM_CitizenASkinny_Red",

	//"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Grey",
	"ZmbM_ClerkFat_Khaki",

	"ZmbF_Clerk_Normal_Blue",
	//"ZmbF_Clerk_Normal_White",
	"ZmbF_Clerk_Normal_Green",
	"ZmbF_Clerk_Normal_Red",

	"ZmbM_Jacket_beige",
	//"ZmbM_Jacket_blue",
	//"ZmbM_Jacket_bluechecks",
	//"ZmbM_Jacket_brown",

	"ZmbF_ShortSkirt_beige",
	"ZmbF_ShortSkirt_brown",
	"ZmbF_ShortSkirt_green",
	"ZmbF_ShortSkirt_grey",
};
ref autoptr TStringArray Zombie_Type_Cymetary = {
	"ZmbF_MilkMaidOld_Beige",
	//"ZmbF_MilkMaidOld_Black",
	"ZmbF_MilkMaidOld_Green",
	"ZmbF_MilkMaidOld_Grey",

	/*"ZmbM_HermitSkinny_Beige",
	"ZmbM_HermitSkinny_Black",
	"ZmbM_HermitSkinny_Green",
	"ZmbM_HermitSkinny_Red",*/
};

ref autoptr TStringArray Wrecks = {
	"Land_Wreck_Uaz",
	//"CivilianSedan",
	//"Chemlight_Red",
};

ref autoptr TStringArray Skeleman = {
	"zisb_skeleman",
	"zisb_mega_skeleman",
};

