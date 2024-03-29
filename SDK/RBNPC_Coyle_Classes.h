#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass RBNPC_Coyle.RBNPC_Coyle_C
	 * Size -> 0x0068 (FullSize[0x5670] - InheritedSize[0x5608])
	 */
	class ARBNPC_Coyle_C : public ARBNPC_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5608(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              HeadMesh;                                                // 0x5610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CigarOffset;                                             // 0x5618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CigarMesh;                                               // 0x5620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CigarInHand;                                             // 0x5628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CigarInMouth;                                            // 0x5630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_CigarSmoke;                                          // 0x5638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_BatterySpark;                                        // 0x5640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_BatterySmoke;                                        // 0x5648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FullBodyMesh;                                            // 0x5650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CigarBlend_BlendValue_4B4D80104CC5B10B1D27E5BCE315706B;  // 0x5658(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         CigarBlend__Direction_4B4D80104CC5B10B1D27E5BCE315706B;  // 0x565C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XB1Z[0x3];                                   // 0x565D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CigarBlend;                                              // 0x5660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCigarInHand;                                           // 0x5668(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8RH1[0x3];                                   // 0x5669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CigarBlendValue;                                         // 0x566C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent();
		class UPoseAsset* GetFacePoseAsset();
		void UserConstructionScript();
		void CigarBlend__FinishedFunc();
		void CigarBlend__UpdateFunc();
		void ReceiveTick(float DeltaSeconds);
		void Cigar_SetFollowFace();
		void Cigar_SetFollowHand();
		void Event_OnWeaponVisible(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor);
		void Event_OnWeaponHidden(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor);
		void ExecuteUbergraph_RBNPC_Coyle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
