class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;					// Default edit box (i.e., text input field)
			class Combo;				// Default combo box (i.e., drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	
	class POD_Module: Module_F
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "POD Module Test";
		category = "Effects";
		function = "POD_fnc_Module";
		functionpriority = 1;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 2;
		is3DEN = 0;
		
	};	
};