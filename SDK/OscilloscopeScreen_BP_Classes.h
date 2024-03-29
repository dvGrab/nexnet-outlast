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
	 * BlueprintGeneratedClass OscilloscopeScreen_BP.OscilloscopeScreen_BP_C
	 * Size -> 0x0048 (FullSize[0x0290] - InheritedSize[0x0248])
	 */
	class AOscilloscopeScreen_BP_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                OscilloscopeScreen01;                                    // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Turn_Linear_E91927DE42E6976D354554B319D2911F;            // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Turn_Wave_E91927DE42E6976D354554B319D2911F;              // 0x0264(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Turn__Direction_E91927DE42E6976D354554B319D2911F;        // 0x0268(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2SW3[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Turn;                                                    // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            FMP_Wave_DMI;                                            // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       OscilloscopeSoundStart;                                  // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       OscilloscopeSoundStop;                                   // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TurnOn(bool Off, float wave1Frenquency, float wave1Amplitude, float wave1Phase, float wave2Frenquency, float wave2Amplitude, float wave2Phase, float wavesSpeed);
		void Refresh(float wave1Frenquency, float wave1Amplitude, float wave1Phase, float wave2Frenquency, float wave2Amplitude, float wave2Phase, float wavesSpeed);
		void Turn__FinishedFunc();
		void Turn__UpdateFunc();
		void TurnOnAnim(bool TurnOn, float wave1Frenquency, float wave1Amplitude, float wave1Phase, float wave2Frenquency, float wave2Amplitude, float wave2Phase, float wavesSpeed);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_OscilloscopeScreen_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
