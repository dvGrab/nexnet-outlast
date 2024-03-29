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
	 * Function W_BugReporterMenu.W_BugReporterMenu_C.GetOkButtonEnabled
	 */
	struct UW_BugReporterMenu_C_GetOkButtonEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FCER[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_BugReporterMenu_C_BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UW_BugReporterMenu_C_BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BugReporterMenu.W_BugReporterMenu_C.ExecuteUbergraph_W_BugReporterMenu
	 */
	struct UW_BugReporterMenu_C_ExecuteUbergraph_W_BugReporterMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FMQI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
