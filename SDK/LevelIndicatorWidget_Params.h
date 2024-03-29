#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * Function LevelIndicatorWidget.LevelIndicatorWidget_C.PlayerLevelUpAnimation
	 */
	struct ULevelIndicatorWidget_C_PlayerLevelUpAnimation_Params
	{	};

	/**
	 * Function LevelIndicatorWidget.LevelIndicatorWidget_C.Init
	 */
	struct ULevelIndicatorWidget_C_Init_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReleaseCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelIndicatorWidget.LevelIndicatorWidget_C.Construct
	 */
	struct ULevelIndicatorWidget_C_Construct_Params
	{	};

	/**
	 * Function LevelIndicatorWidget.LevelIndicatorWidget_C.LevelAnimationFinished
	 */
	struct ULevelIndicatorWidget_C_LevelAnimationFinished_Params
	{	};

	/**
	 * Function LevelIndicatorWidget.LevelIndicatorWidget_C.ExecuteUbergraph_LevelIndicatorWidget
	 */
	struct ULevelIndicatorWidget_C_ExecuteUbergraph_LevelIndicatorWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelIndicatorWidget.LevelIndicatorWidget_C.LevelUpAnimationFinished__DelegateSignature
	 */
	struct ULevelIndicatorWidget_C_LevelUpAnimationFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
