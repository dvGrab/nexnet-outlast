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
	 * Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.HasPlayerInList
	 */
	struct UW_AG_AdminGameControls_C_HasPlayerInList_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Exists;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XJGG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.Construct
	 */
	struct UW_AG_AdminGameControls_C_Construct_Params
	{	};

	/**
	 * Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.UpdatePlayerList
	 */
	struct UW_AG_AdminGameControls_C_UpdatePlayerList_Params
	{	};

	/**
	 * Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.BndEvt__W_AG_AdminGameControls_W_Button_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
	 */
	struct UW_AG_AdminGameControls_C_BndEvt__W_AG_AdminGameControls_W_Button_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.ExecuteUbergraph_W_AG_AdminGameControls
	 */
	struct UW_AG_AdminGameControls_C_ExecuteUbergraph_W_AG_AdminGameControls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NNEH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
