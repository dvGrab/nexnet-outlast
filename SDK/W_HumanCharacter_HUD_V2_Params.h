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
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.GetOwningPlayerCharacter
	 */
	struct UW_HumanCharacter_HUD_V2_C_GetOwningPlayerCharacter_Params
	{
	public:
		class APlayerCharacter*                                    Return_Value;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowFireModes
	 */
	struct UW_HumanCharacter_HUD_V2_C_ShowFireModes_Params
	{
	public:
		class ABaseWeapon*                                         Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowMagCheck
	 */
	struct UW_HumanCharacter_HUD_V2_C_ShowMagCheck_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnWeaponFireModeChanged_Params
	{
	public:
		EFireMode                                                  newFireMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V7XU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TickCommandContext
	 */
	struct UW_HumanCharacter_HUD_V2_C_TickCommandContext_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddMapActor
	 */
	struct UW_HumanCharacter_HUD_V2_C_AddMapActor_Params
	{
	public:
		class UMapActorComponent*                                  MapActorComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              MapActorIconWidgetClass;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0010(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        IconColor;                                               // 0x0098(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        IconTextColor;                                           // 0x00A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RotationOffset;                                          // 0x00B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T6NC[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMapActorWidget*                                     ReturnValue;                                             // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.PreviousTabletMenu
	 */
	struct UW_HumanCharacter_HUD_V2_C_PreviousTabletMenu_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.NextTabletMenu
	 */
	struct UW_HumanCharacter_HUD_V2_C_NextTabletMenu_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTablet
	 */
	struct UW_HumanCharacter_HUD_V2_C_HideTablet_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTablet
	 */
	struct UW_HumanCharacter_HUD_V2_C_ShowTablet_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideIncriminationExtractionHUD
	 */
	struct UW_HumanCharacter_HUD_V2_C_HideIncriminationExtractionHUD_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowIncriminationExtractionHUD
	 */
	struct UW_HumanCharacter_HUD_V2_C_ShowIncriminationExtractionHUD_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurrentFireMode
	 */
	struct UW_HumanCharacter_HUD_V2_C_UpdateCurrentFireMode_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.FadeInHUD
	 */
	struct UW_HumanCharacter_HUD_V2_C_FadeInHUD_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitializeItemSelectionPanel
	 */
	struct UW_HumanCharacter_HUD_V2_C_InitializeItemSelectionPanel_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTCV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.EnabledCurvedHUD
	 */
	struct UW_HumanCharacter_HUD_V2_C_EnabledCurvedHUD_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.DisableCurvedHUD
	 */
	struct UW_HumanCharacter_HUD_V2_C_DisableCurvedHUD_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.IsCurvedHUDEnabled
	 */
	struct UW_HumanCharacter_HUD_V2_C_IsCurvedHUDEnabled_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurveHUDValue
	 */
	struct UW_HumanCharacter_HUD_V2_C_UpdateCurveHUDValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleCurvedHUD
	 */
	struct UW_HumanCharacter_HUD_V2_C_ToggleCurvedHUD_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleHUDSway
	 */
	struct UW_HumanCharacter_HUD_V2_C_ToggleHUDSway_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Construct
	 */
	struct UW_HumanCharacter_HUD_V2_C_Construct_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Tick
	 */
	struct UW_HumanCharacter_HUD_V2_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Re-Initialize Item Selection Menu
	 */
	struct UW_HumanCharacter_HUD_V2_C_Re_Initialize_Item_Selection_Menu_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnWeaponFireModeChanged_Event_1_Params
	{
	public:
		EFireMode                                                  newFireMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFireMode                                                  LastFireMode;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitalizeDelegateEvents
	 */
	struct UW_HumanCharacter_HUD_V2_C_InitalizeDelegateEvents_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ReflectHUDSettings
	 */
	struct UW_HumanCharacter_HUD_V2_C_ReflectHUDSettings_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ChatPressed
	 */
	struct UW_HumanCharacter_HUD_V2_C_ChatPressed_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TeamChatPressed
	 */
	struct UW_HumanCharacter_HUD_V2_C_TeamChatPressed_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.RemoveMapActor
	 */
	struct UW_HumanCharacter_HUD_V2_C_RemoveMapActor_Params
	{
	public:
		class UMapActorComponent*                                  MapActorComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateMapFloors
	 */
	struct UW_HumanCharacter_HUD_V2_C_UpdateMapFloors_Params
	{
	public:
		TArray<struct FBuildingFloor>                              Floors;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponMagCheck_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnWeaponMagCheck_Event_1_Params
	{
	public:
		class ABaseMagazineWeapon*                                 MagazineWeapon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnInventoryItemsChanged
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnInventoryItemsChanged_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddScorePopup
	 */
	struct UW_HumanCharacter_HUD_V2_C_AddScorePopup_Params
	{
	public:
		class FText                                                ScoreText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ScoreValue;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bGive;                                                   // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialPrompt
	 */
	struct UW_HumanCharacter_HUD_V2_C_ShowTutorialPrompt_Params
	{
	public:
		class FString                                              MessageID;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bFirstShowing;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JL1R[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                MessageTitle;                                            // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        MessageContent;                                          // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTutorialPrompt
	 */
	struct UW_HumanCharacter_HUD_V2_C_HideTutorialPrompt_Params
	{
	public:
		class FString                                              MessageID;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialOverview
	 */
	struct UW_HumanCharacter_HUD_V2_C_ShowTutorialOverview_Params
	{
	public:
		class FString                                              MessageID;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                MessageTitle;                                            // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        MessageContent;                                          // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnTeamViewSet_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnTeamViewSet_Event_1_Params
	{
	public:
		class AReadyOrNotCharacter*                                NewViewCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnMenuOpened_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnMenuOpened_Event_1_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemEquipped_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnItemEquipped_Event_1_Params
	{
	public:
		class ABaseItem*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnBodyPartDamaged_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnBodyPartDamaged_Event_1_Params
	{
	public:
		bool                                                       bHeadDamaged;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBodyDamaged;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftArmDamaged;                                         // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRightArmDamaged;                                        // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftLegDamaged;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRightLegDamaged;                                        // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftFootDamaged;                                        // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRightFootDamaged;                                       // 0x0007(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Reconstruct
	 */
	struct UW_HumanCharacter_HUD_V2_C_Reconstruct_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Pressed_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_Pressed_Event_1_Params
	{
	public:
		int32_t                                                    GroupIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CategoryIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Released_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_Released_Event_1_Params
	{
	public:
		int32_t                                                    GroupIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CategoryIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateItemSelectionPanel
	 */
	struct UW_HumanCharacter_HUD_V2_C_UpdateItemSelectionPanel_Params
	{	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnCharacterTakeDamage_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnCharacterTakeDamage_Event_1_Params
	{
	public:
		class AReadyOrNotCharacter*                                InstigatorCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AReadyOrNotCharacter*                                DamagedCharacter;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_ItemChanged_Event_1
	 */
	struct UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_ItemChanged_Event_1_Params
	{
	public:
		int32_t                                                    GroupIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CategoryIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ExecuteUbergraph_W_HumanCharacter_HUD_V2
	 */
	struct UW_HumanCharacter_HUD_V2_C_ExecuteUbergraph_W_HumanCharacter_HUD_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
