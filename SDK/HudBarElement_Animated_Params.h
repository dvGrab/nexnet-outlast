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
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.ForceValue
	 */
	struct UHudBarElement_Animated_C_ForceValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.SetEntireBar
	 */
	struct UHudBarElement_Animated_C_SetEntireBar_Params
	{
	public:
		bool                                                       Fill;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.UpdateTween
	 */
	struct UHudBarElement_Animated_C_UpdateTween_Params
	{	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.SetupNewTween
	 */
	struct UHudBarElement_Animated_C_SetupNewTween_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsStartBracket;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFinishBracket;                                         // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.Setup Tints
	 */
	struct UHudBarElement_Animated_C_Setup_Tints_Params
	{
	public:
		struct FLinearColor                                        Tint;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        BgdTint;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        GlowTint;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.PreConstruct
	 */
	struct UHudBarElement_Animated_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.Construct
	 */
	struct UHudBarElement_Animated_C_Construct_Params
	{	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.Tick
	 */
	struct UHudBarElement_Animated_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.StartTween
	 */
	struct UHudBarElement_Animated_C_StartTween_Params
	{	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.ExecuteUbergraph_HudBarElement_Animated
	 */
	struct UHudBarElement_Animated_C_ExecuteUbergraph_HudBarElement_Animated_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.BleedoutCompleted__DelegateSignature
	 */
	struct UHudBarElement_Animated_C_BleedoutCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function HudBarElement_Animated.HudBarElement_Animated_C.TweenCompleted__DelegateSignature
	 */
	struct UHudBarElement_Animated_C_TweenCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
