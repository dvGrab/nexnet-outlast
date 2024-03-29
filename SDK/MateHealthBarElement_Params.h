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
	 * Function MateHealthBarElement.MateHealthBarElement_C.ForceValue
	 */
	struct UMateHealthBarElement_C_ForceValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.SetEntireBar
	 */
	struct UMateHealthBarElement_C_SetEntireBar_Params
	{
	public:
		bool                                                       Fill;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.SetBarHeight
	 */
	struct UMateHealthBarElement_C_SetBarHeight_Params
	{
	public:
		float                                                      DesiredSize_Y;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.UpdateTints
	 */
	struct UMateHealthBarElement_C_UpdateTints_Params
	{
	public:
		bool                                                       IsInBleedout;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.UpdateTween
	 */
	struct UMateHealthBarElement_C_UpdateTween_Params
	{	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.Start New Tween
	 */
	struct UMateHealthBarElement_C_Start_New_Tween_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StartsOutsideBracket;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.PreConstruct
	 */
	struct UMateHealthBarElement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.Construct
	 */
	struct UMateHealthBarElement_C_Construct_Params
	{	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.Tick
	 */
	struct UMateHealthBarElement_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.ExecuteUbergraph_MateHealthBarElement
	 */
	struct UMateHealthBarElement_C_ExecuteUbergraph_MateHealthBarElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UN4S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.BleedoutCompleted__DelegateSignature
	 */
	struct UMateHealthBarElement_C_BleedoutCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function MateHealthBarElement.MateHealthBarElement_C.TweenCompleted__DelegateSignature
	 */
	struct UMateHealthBarElement_C_TweenCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
