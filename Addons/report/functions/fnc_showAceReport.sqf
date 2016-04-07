_handle = createDialog "CAV_DialogMain";
​
with uiNamespace do {
​
	disableSerialization;
	_display = findDisplay 99580;
	
		button_test = _display ctrlCreate ["RscButton", 1000];
		button_test ctrlSetPosition  [0.484531 * safezoneW + safezoneX, 0.5 * safezoneH + safezoneY, 0.04125 * safezoneW, 0.022 * safezoneH];
		button_test ctrlCommit 0;
};