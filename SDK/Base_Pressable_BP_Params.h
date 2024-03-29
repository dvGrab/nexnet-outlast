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
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.UserConstructionScript
	 */
	struct ABase_Pressable_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.Timeline_0__FinishedFunc
	 */
	struct ABase_Pressable_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.Timeline_0__UpdateFunc
	 */
	struct ABase_Pressable_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.SetButton
	 */
	struct ABase_Pressable_BP_C_SetButton_Params
	{
	public:
		struct FLinearColor                                        ButtonColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.PushButton
	 */
	struct ABase_Pressable_BP_C_PushButton_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SetColor;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.Init
	 */
	struct ABase_Pressable_BP_C_Init_Params
	{	};

	/**
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.Event_OnResetStage
	 */
	struct ABase_Pressable_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.SetColor
	 */
	struct ABase_Pressable_BP_C_SetColor_Params
	{
	public:
		bool                                                       Pushed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Pressable_BP.Base_Pressable_BP_C.ExecuteUbergraph_Base_Pressable_BP
	 */
	struct ABase_Pressable_BP_C_ExecuteUbergraph_Base_Pressable_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
