	_display = _this select 0;
	
	disableSerialization;		
		
		Button_Observer_Main = _display ctrlCreate ["RscButton", 1001];
		Button_Observer_Main ctrlSetText ("Observer");
		Button_Observer_Main ctrlSetPosition  [X_PART(5), Y_PART(2), W_PART(8.5),H_PART(3)];
		Button_Observer_Main ctrlCommit 0;