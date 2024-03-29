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
	 * BlueprintGeneratedClass Futterman_Drill.Futterman_Drill_C
	 * Size -> 0x0001 (FullSize[0x0031] - InheritedSize[0x0030])
	 */
	class UFutterman_Drill_C : public UAnimNotifyState
	{
	public:
		bool                                                       DrillManual;                                             // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		class FString GetNotifyName();
		void TryToSetFuttermanDrillVariable(class USkeletalMeshComponent* Mesh_Comp, bool Drill_Value, bool DrillManual, bool* Result);
		bool Received_NotifyEnd(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation, float AnimDeltaTime);
		bool Received_NotifyBegin(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation, float AnimDeltaTime, float TotalDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
