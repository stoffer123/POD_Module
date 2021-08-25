class CfgVehicles
{

	class Logic;
	class Module_F: Logic {};
	
	
	class POD_Module: Module_F
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "POD Module Test";
		category = "Effects";
		function = "POD_Module_fnc_Module";
		functionpriority = 1;
		isGlobal = 0;
		is3DEN = 0;
		
	};	
};