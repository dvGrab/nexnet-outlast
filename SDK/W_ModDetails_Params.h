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
	 * Function W_ModDetails.W_ModDetails_C.FormatUpdateTime
	 */
	struct UW_ModDetails_C_FormatUpdateTime_Params
	{
	public:
		class FText                                                FormattedTime;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.CreateGalleryThumbnail
	 */
	struct UW_ModDetails_C_CreateGalleryThumbnail_Params
	{
	public:
		class UTexture2DDynamic*                                   Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_216D[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.SetStats
	 */
	struct UW_ModDetails_C_SetStats_Params
	{	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.SetRating
	 */
	struct UW_ModDetails_C_SetRating_Params
	{	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.SetButtonSubcribedState
	 */
	struct UW_ModDetails_C_SetButtonSubcribedState_Params
	{
	public:
		bool                                                       Subscribed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.OnGalleryImageLoaded
	 */
	struct UW_ModDetails_C_OnGalleryImageLoaded_Params
	{
	public:
		class UTexture2DDynamic*                                   Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.LoadImageFromThumb
	 */
	struct UW_ModDetails_C_LoadImageFromThumb_Params
	{
	public:
		class UW_ModDetailsThumbnails_C*                           TriggeringThumbnail;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.OnFullSizeGalleryImageLoaded
	 */
	struct UW_ModDetails_C_OnFullSizeGalleryImageLoaded_Params
	{
	public:
		class UTexture2DDynamic*                                   Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.Construct
	 */
	struct UW_ModDetails_C_Construct_Params
	{	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.OnModSet
	 */
	struct UW_ModDetails_C_OnModSet_Params
	{	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ModDetails_C_BndEvt__W_ModDetails_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_Subscribe_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_ModDetails_C_BndEvt__W_ModDetails_btn_Subscribe_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.OnLoadingFinished
	 */
	struct UW_ModDetails_C_OnLoadingFinished_Params
	{
	public:
		bool                                                       bSubscribed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_VoteUp_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_ModDetails_C_BndEvt__W_ModDetails_btn_VoteUp_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.OnRatingSubmitted
	 */
	struct UW_ModDetails_C_OnRatingSubmitted_Params
	{	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_VoteDown_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UW_ModDetails_C_BndEvt__W_ModDetails_btn_VoteDown_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_ViewInBrowser_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 */
	struct UW_ModDetails_C_BndEvt__W_ModDetails_btn_ViewInBrowser_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.CloseDetails
	 */
	struct UW_ModDetails_C_CloseDetails_Params
	{	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.ExecuteUbergraph_W_ModDetails
	 */
	struct UW_ModDetails_C_ExecuteUbergraph_W_ModDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LWWH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ModDetails.W_ModDetails_C.OnClickaway__DelegateSignature
	 */
	struct UW_ModDetails_C_OnClickaway__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
