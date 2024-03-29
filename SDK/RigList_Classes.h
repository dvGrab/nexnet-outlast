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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass RigList.RigList_C
	 * Size -> 0x0049 (FullSize[0x02C1] - InheritedSize[0x0278])
	 */
	class URigList_C : public URBUpgradeMenuTab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        RigList;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsLoadout;                                              // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E2CP[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRigHovered;                                            // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRigUnhovered;                                          // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRigClicked;                                            // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIgnoreNextClickEvent;                                   // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnRigReleasedEvent(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void OnRigPressedEvent(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void OnRigClickedEvent(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void OnRigUnhoveredEvent(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void OnRigHoveredEvent(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void Refresh();
		void Init(bool bIsLoadout);
		void Setup();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_RigList(int32_t EntryPoint);
		void OnRigClicked__DelegateSignature(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void OnRigUnhovered__DelegateSignature(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void OnRigHovered__DelegateSignature(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
