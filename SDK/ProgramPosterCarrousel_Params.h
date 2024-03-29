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
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetRightCycleVisibility
	 */
	struct UProgramPosterCarrousel_C_GetRightCycleVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLeftCycleVisibility
	 */
	struct UProgramPosterCarrousel_C_GetLeftCycleVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLastHoveredPoster
	 */
	struct UProgramPosterCarrousel_C_GetLastHoveredPoster_Params
	{
	public:
		class UProgramPosterCarrouselEntry_C*                      outLastHoveredPoster;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnFocusReceived
	 */
	struct UProgramPosterCarrousel_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetCurrentlySelectedPoster
	 */
	struct UProgramPosterCarrousel_C_GetCurrentlySelectedPoster_Params
	{
	public:
		class UProgramPosterCarrouselEntry_C*                      SelectedPoster;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleLeftCycle
	 */
	struct UProgramPosterCarrousel_C_HandleLeftCycle_Params
	{	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleRightCycle
	 */
	struct UProgramPosterCarrousel_C_HandleRightCycle_Params
	{	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetFirstAvailablePoster
	 */
	struct UProgramPosterCarrousel_C_GetFirstAvailablePoster_Params
	{
	public:
		class UProgramPosterCarrouselEntry_C*                      Poster;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetPosterForId
	 */
	struct UProgramPosterCarrousel_C_GetPosterForId_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UProgramPosterCarrouselEntry_C*                      Poster;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Cycle Posters
	 */
	struct UProgramPosterCarrousel_C_Cycle_Posters_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MTV5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ClearDelegates
	 */
	struct UProgramPosterCarrousel_C_ClearDelegates_Params
	{	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterUnhover
	 */
	struct UProgramPosterCarrousel_C_HandlePosterUnhover_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterHover
	 */
	struct UProgramPosterCarrousel_C_HandlePosterHover_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterClick
	 */
	struct UProgramPosterCarrousel_C_HandlePosterClick_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Refresh
	 */
	struct UProgramPosterCarrousel_C_Refresh_Params
	{	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Setup
	 */
	struct UProgramPosterCarrousel_C_Setup_Params
	{	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.PreConstruct
	 */
	struct UProgramPosterCarrousel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Construct
	 */
	struct UProgramPosterCarrousel_C_Construct_Params
	{	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UProgramPosterCarrousel_C_BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UProgramPosterCarrousel_C_BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ExecuteUbergraph_ProgramPosterCarrousel
	 */
	struct UProgramPosterCarrousel_C_ExecuteUbergraph_ProgramPosterCarrousel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterUnhovered__DelegateSignature
	 */
	struct UProgramPosterCarrousel_C_OnPosterUnhovered__DelegateSignature_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterHovered__DelegateSignature
	 */
	struct UProgramPosterCarrousel_C_OnPosterHovered__DelegateSignature_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterClicked__DelegateSignature
	 */
	struct UProgramPosterCarrousel_C_OnPosterClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
