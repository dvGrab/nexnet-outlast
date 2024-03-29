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
	 * BlueprintGeneratedClass Coyle_CigarInHand.Coyle_CigarInHand_C
	 * Size -> 0x0004 (FullSize[0x0034] - InheritedSize[0x0030])
	 */
	class UCoyle_CigarInHand_C : public UAnimNotifyState
	{
	public:
		float                                                      blendTime;                                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool Received_NotifyEnd(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation, float AnimDeltaTime);
		bool Received_NotifyBegin(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation, float AnimDeltaTime, float TotalDuration);
		class FString GetNotifyName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
