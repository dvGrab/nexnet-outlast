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
	 * BlueprintGeneratedClass Player_Face_Anim_Notify.Player_Face_Anim_Notify_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UPlayer_Face_Anim_Notify_C : public UAnimNotify
	{
	public:
		class UAnimSequence*                                       WhichFacialAnim;                                         // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool FacialAnim(class USkeletalMeshComponent* Mesh_Comp);
		bool Received_Notify(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation);
		class FString GetNotifyName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
