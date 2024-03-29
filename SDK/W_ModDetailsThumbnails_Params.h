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
	 * Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.Construct
	 */
	struct UW_ModDetailsThumbnails_C_Construct_Params
	{	};

	/**
	 * Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
	 */
	struct UW_ModDetailsThumbnails_C_BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
	 */
	struct UW_ModDetailsThumbnails_C_BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.Highlight
	 */
	struct UW_ModDetailsThumbnails_C_Highlight_Params
	{
	public:
		bool                                                       IsHighlighted;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_ModDetailsThumbnails_C_BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.ExecuteUbergraph_W_ModDetailsThumbnails
	 */
	struct UW_ModDetailsThumbnails_C_ExecuteUbergraph_W_ModDetailsThumbnails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_489L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.OnThumbnailClicked__DelegateSignature
	 */
	struct UW_ModDetailsThumbnails_C_OnThumbnailClicked__DelegateSignature_Params
	{
	public:
		class UW_ModDetailsThumbnails_C*                           TriggeringThumbnail;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ThumbIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
