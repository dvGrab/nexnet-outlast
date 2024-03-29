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
	 * BlueprintGeneratedClass CeilingLamp_07.CeilingLamp-07_C
	 * Size -> 0x0009 (FullSize[0x0789] - InheritedSize[0x0780])
	 */
	class ACeilingLamp__C : public ACeilingBulbLightBase__C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0780(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       UseBounceLight;                                          // 0x0788(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ExecuteUbergraph_CeilingLamp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
