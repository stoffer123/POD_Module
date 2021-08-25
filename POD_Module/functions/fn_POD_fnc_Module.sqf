_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

if (_activated) then 
{

	_sound = "POD_Sounds_Test";
	_soundSource = objnull;
	while {!isnull _logic} do 
	{
		waituntil 
		{
			_soundSource setpos position _logic;
			sleep 0.1;

			isnull _logic
		};
		if (isnull _logic) exitwith {};

		deletevehicle _soundSource;
		_soundSource = createsoundsource [_sound,position _logic,[],0];
	};
	deletevehicle _soundSource;
};