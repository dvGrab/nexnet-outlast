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
	 * BlueprintGeneratedClass ORS_MT01_SND.ORS_MT01_SND_C
	 * Size -> 0x0060 (FullSize[0x02B8] - InheritedSize[0x0258])
	 */
	class AORS_MT01_SND_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              CafeteriaSoundVolume[0x28];                              // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBNetworkSoundActor*                                RBNetworkSoundActorBoiler_ExecuteUbergraph_ORS_MT01_SND_RefProperty; // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorPump_ExecuteUbergraph_ORS_MT01_SND_RefProperty; // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorPumpLiquid_ExecuteUbergraph_ORS_MT01_SND_RefProperty; // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorChildren2_ExecuteUbergraph_ORS_MT01_SND_RefProperty; // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorChildren1_ExecuteUbergraph_ORS_MT01_SND_RefProperty; // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorChildren_ExecuteUbergraph_ORS_MT01_SND_RefProperty; // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void MT01_SND_BoilingStart();
		void MT01_SND_BoilingStop();
		void MT01_SND_PumpStart();
		void MT01_SND_PumpStop();
		void MT01_SND_StartMannequinEat();
		void MT01_SND_SpawnGoose();
		void ExecuteUbergraph_ORS_MT01_SND(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
