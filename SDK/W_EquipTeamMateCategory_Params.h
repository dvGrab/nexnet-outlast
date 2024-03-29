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
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.GetColorAndOpacity_1
	 */
	struct UW_EquipTeamMateCategory_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Get_GearCategory_Text_Text_1
	 */
	struct UW_EquipTeamMateCategory_C_Get_GearCategory_Text_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.PreConstruct
	 */
	struct UW_EquipTeamMateCategory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UW_EquipTeamMateCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Tick
	 */
	struct UW_EquipTeamMateCategory_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.ExecuteUbergraph_W_EquipTeamMateCategory
	 */
	struct UW_EquipTeamMateCategory_C_ExecuteUbergraph_W_EquipTeamMateCategory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_EquipTeamMateCategory_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_EquipTeamMateCategory_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnLoadoutItemButtonClicked__DelegateSignature
	 */
	struct UW_EquipTeamMateCategory_C_OnLoadoutItemButtonClicked__DelegateSignature_Params
	{
	public:
		EItemClass                                                 ItemClass;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TBRU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemObjectClass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTactical;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E5PM[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TacticalSlot;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsMultipleTacticalSlots;                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LMJM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxTacticalSlots;                                        // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Starting_Tactical_Slot;                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YQIR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_LoadoutItem_C*                                    Loadout_Item_Widget;                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_EquipTeamMateCategory_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
