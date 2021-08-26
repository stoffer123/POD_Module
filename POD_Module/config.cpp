class CfgPatches 
{
    class POD_Module
	{
        author = "Platoon of Danes - Mikkelsen";
        requiredAddons[] = {"A3_Sounds_F","A3_Modules_F","POD_Sounds"};
        requiredVersion = 0.1;
        units[] = {"POD_Module"};
        weapons[] = {};
    };
};

class CfgFunctions
{
	class POD
	{
		class Effects
		{
			file="POD_Module\POD_Module\functions";
			class Module
			{
			};
		};
	};
};


#include "Cfgvehicles.hpp"