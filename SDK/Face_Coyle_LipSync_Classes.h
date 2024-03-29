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
	 * BlueprintGeneratedClass Face_Coyle_LipSync.Face_Coyle_LipSync_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UFace_Coyle_LipSync_C : public UAnimNotify
	{
	public:
		class UAnimSequence*                                       WhichLipSync;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool LipSyncAnim(class USkeletalMeshComponent* MeshComp);
		bool Received_Notify(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation);
		class FString GetNotifyName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
