/*  
	This handles all keybinds
    Execution on: Client

	Keybinds:
	Change binds in controls (not cba controls) > Enable/Disable stances
	
	- Silence
*/

isUsingAlternateStance = false;
_alternatestances = [] spawn {
	waitUntil {!isNull(findDisplay 46)};
	(findDisplay 46) displayAddEventHandler ["KeyDown","_this call keyspressed"];
	keyspressed = {
		_keyDik = _this select 1;
		_shift =_this select 2;
		_ctrl = _this select 3;
		_alt = _this select 4;
		_handled = false;
		switch (_this select 1) do {
			case 17: {//W key
				if (_shift && stance player == "STAND" && isUsingAlternateStance) then {
					player playMoveNow "AmovPercMtacSlowWrflDf";
				} else {
				if (stance player == "STAND" && isUsingAlternateStance) then {
						player playMoveNow "AmovPercMwlkSlowWrflDf";
					};
				};
			};
			case 31: {//S key
				if (stance player == "STAND" && isUsingAlternateStance) then {
					player playMoveNow "amovpercmstpsraswrfldnon";
				};
			};
		};
		_handled;
	};
};
