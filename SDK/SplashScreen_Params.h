#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SplashScreen.SplashScreen_C.Event_OnFocusMenu
	 */
	struct USplashScreen_C_Event_OnFocusMenu_Params
	{	};

	/**
	 * Function SplashScreen.SplashScreen_C.OnMainMenuStateChanged
	 */
	struct USplashScreen_C_OnMainMenuStateChanged_Params
	{
	public:
		EMainMenuState                                             mainMenuState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplashScreen.SplashScreen_C.Construct
	 */
	struct USplashScreen_C_Construct_Params
	{	};

	/**
	 * Function SplashScreen.SplashScreen_C.ExecuteUbergraph_SplashScreen
	 */
	struct USplashScreen_C_ExecuteUbergraph_SplashScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
