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
	 * BlueprintGeneratedClass PoliceStation_01_SND_SoundVolume.PoliceStation-01_SND_SoundVolume_C
	 * Size -> 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
	 */
	class APoliceStation01_SND_SoundVolume_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ARBSoundConnectorActor*                              RBSoundConnectorActor69_18_ExecuteUbergraph_PoliceStation01_SND_SoundVolume_RefProperty; // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBSoundConnectorActor*                              RBSoundConnectorActor113_ExecuteUbergraph_PoliceStation01_SND_SoundVolume_RefProperty; // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PST02B01_SND_ControlRoomButtonPress();
		void PST02B01_SND_StartingSetup();
		void Event_OnResetStage();
		void ExecuteUbergraph_PoliceStation01_SND_SoundVolume(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
