#pragma once

/**
 * Name: READYORNOT
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
	 * Function W_ModErrorDialog.W_ModErrorDialog_C.Construct
	 */
	struct UW_ModErrorDialog_C_Construct_Params
	{	};

	/**
	 * Function W_ModErrorDialog.W_ModErrorDialog_C.BndEvt__W_ModErrorDialog_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_ModErrorDialog_C_BndEvt__W_ModErrorDialog_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModErrorDialog.W_ModErrorDialog_C.SetError
	 */
	struct UW_ModErrorDialog_C_SetError_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_ModErrorDialog.W_ModErrorDialog_C.ExecuteUbergraph_W_ModErrorDialog
	 */
	struct UW_ModErrorDialog_C_ExecuteUbergraph_W_ModErrorDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UG6X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ModErrorDialog.W_ModErrorDialog_C.OnClosed__DelegateSignature
	 */
	struct UW_ModErrorDialog_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
