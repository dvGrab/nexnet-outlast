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
	 * Function W_COOPDeathScreen.W_COOPDeathScreen_C.Tick
	 */
	struct UW_COOPDeathScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_COOPDeathScreen.W_COOPDeathScreen_C.BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_COOPDeathScreen_C_BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_COOPDeathScreen.W_COOPDeathScreen_C.ExecuteUbergraph_W_COOPDeathScreen
	 */
	struct UW_COOPDeathScreen_C_ExecuteUbergraph_W_COOPDeathScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_COOPDeathScreen.W_COOPDeathScreen_C.OnSpectateButtonClicked__DelegateSignature
	 */
	struct UW_COOPDeathScreen_C_OnSpectateButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
