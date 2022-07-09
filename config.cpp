class cfgPatches
{
	class Alternate-Stances
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
				file = "Alternate-Stances\functions\fn_checkStances.sqf";
			};
		};
	};
};

class CfgUserActions
{
	class AS_EnableDisable // This class name is used for internal representation and also for the inputAction command.
	{
		displayName = "Enable/Disable Alternate Mode";
		tooltip = "";
		onActivate = "if (isUsingAlternateStance) then {isUsingAlternateStance = false} else {isUsingAlternateStance = true}";		// _this is always true.
		onDeactivate = "";		// _this is always false.
		onAnalog = "";	// _this is the scalar analog value.
		analogChangeThreshold = 0.1; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
};

class UserActionGroups
{
	class AS_Keybinds // Unique classname of your category.
	{
		name = "Alternate Stances"; // Display name of your category.
		isAddon = 1;
		group[] = {
			"AS_EnableDisable"
		};
	};
};