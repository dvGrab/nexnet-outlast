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
	 * BlueprintGeneratedClass Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C
	 * Size -> 0x0060 (FullSize[0x0370] - InheritedSize[0x0310])
	 */
	class ABase_OpenSpaceContainer_BP_C : public ARBContainer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBEditorSelectedPreviewComponent*                   RBEditorSelectedPreview;                                 // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       SpawnZoneVisualHelper;                                   // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocation;                                           // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 EditorIcon;                                              // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         InteractionStaticMesh;                                   // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          BaseTransform;                                           // 0x0340(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool FixUp();
		void UserConstructionScript();
		void OnEditorPostLoad();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostDuplicated(class AActor* duplicationParent);
		void PostEditChange(const class FName& PropertyName);
		void PostEditMove(bool bFinished);
		void TickSelected();
		void ExecuteUbergraph_Base_OpenSpaceContainer_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
