class CfgPatches
{
	class ctb_ruck
	{
		units[] = {};
		weapons[] ={};
		requiredAddons[] = {};
	};
};

class cfgVehicles
{
	// Redeclare...so we can inherit from it.
	// This one has a maximumLoad setting of 160 and mass of 20
	class B_Kitbag_Base;
	class B_Kitbag_E_CTB: B_Kitbag_Base  // We're inheriting from an A3 backup...in case there's an extra config.
	{
		author= "Marty [CTB] & Bohemia Interactive Software [Arma 2]";
		_generalMacro= "B_Kitbag_E_CTB";
		scope= 2;
		displayName= "CTB Ruck (Even)";
		model= "ctb_ruck\ctb_a2ruck.p3d";	// Declare this because the B_AssaultPack_base has a different model
		hiddenSelections[]= {"e0","e1","e2","e3","e4","e5","e6","e7"};  // There's no ee7...
		hiddenSelectionsTextures[]= {"","","","","","","",""};
	};
	class B_Kitbag_O_CTB: B_Kitbag_Base	// Could inherit from a common CTB/NameTag base...probably should.
	{
		author= "Marty [CTB] & Bohemia Interactive Software [Arma 2]";
		_generalMacro= "B_Kitbag_O_CTB";
		scope= 2;
		displayName= "CTB Ruck (Odd)";
		model= "ctb_ruck\ctb_a2ruck.p3d";	// Declare this because the B_AssaultPack_base has a different model
		hiddenSelections[]= {"o0","o1","o2","o3","o4","o5","o6","o7","o8"};  
		hiddenSelectionsTextures[]= {"","","","","","","","",""};
	};	
};
