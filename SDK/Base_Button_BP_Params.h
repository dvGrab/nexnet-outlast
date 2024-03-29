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
	 * Function Base_Button_BP.Base_Button_BP_C.GetStopAnimation
	 */
	struct ABase_Button_BP_C_GetStopAnimation_Params
	{
	public:
		class UAnimSequence*                                       Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button_BP.Base_Button_BP_C.GetStartAnimation
	 */
	struct ABase_Button_BP_C_GetStartAnimation_Params
	{
	public:
		class UAnimSequence*                                       Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button_BP.Base_Button_BP_C.OnButtonPressed_Internal
	 */
	struct ABase_Button_BP_C_OnButtonPressed_Internal_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Button_BP.Base_Button_BP_C.InitChildButton
	 */
	struct ABase_Button_BP_C_InitChildButton_Params
	{	};

	/**
	 * Function Base_Button_BP.Base_Button_BP_C.ResetButton
	 */
	struct ABase_Button_BP_C_ResetButton_Params
	{	};

	/**
	 * Function Base_Button_BP.Base_Button_BP_C.ReceiveBeginPlay
	 */
	struct ABase_Button_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_Button_BP.Base_Button_BP_C.ExecuteUbergraph_Base_Button_BP
	 */
	struct ABase_Button_BP_C_ExecuteUbergraph_Base_Button_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button_BP.Base_Button_BP_C.OnButtonPressed__DelegateSignature
	 */
	struct ABase_Button_BP_C_OnButtonPressed__DelegateSignature_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
