﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Cybernetics_Civilian_V2.Cybernetics_Civilian_V2_C
	 * Size -> 0x0010 (FullSize[0x1FD0] - InheritedSize[0x1FC0])
	 */
	class ACybernetics_Civilian_V2_C : public ACivilianCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1FC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                In_Bone_Name;                                            // 0x1FC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__Cybernetics_Civilian_V2_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FCoreUObject_FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_Cybernetics_Civilian_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
