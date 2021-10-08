class cfgPatches
{
	class AlternateStances
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {};
	}
}

class CfgFunctions
{
	class AlternateStances
	{
		class functions
		{
			class checkStances
			{
				postInit = 1;
				file = "AlternateStances\functions\fn_checkStances.sqf";
			};
		};
	};
};