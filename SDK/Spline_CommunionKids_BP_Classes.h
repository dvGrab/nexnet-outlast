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
	 * BlueprintGeneratedClass Spline_CommunionKids_BP.Spline_CommunionKids_BP_C
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class ASpline_CommunionKids_BP_C : public ACommunionKids_Base_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   NotMovingCollision;                                      // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshCollisionState();
		void IsSplineAnchorParentPlaying(bool* bActive);
		void GetSplineAnchorParent(class ASplineAnchor_BP_C** SplineAnchorParent);
		void UserConstructionScript();
		void StartStaring(class AActor* StaringActor);
		void StartPraying();
		void StartEating(class AActor* Target);
		void DoneEating();
		void ReceiveBeginPlay();
		void SplineAnchorMovingStateChanged(bool bMoving);
		void ExecuteUbergraph_Spline_CommunionKids_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
