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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SoundDetector_BP.SoundDetector_BP_C.Event_OnResetStage
	 */
	struct ASoundDetector_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function SoundDetector_BP.SoundDetector_BP_C.ReceiveTick
	 */
	struct ASoundDetector_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundDetector_BP.SoundDetector_BP_C.ReceiveBeginPlay
	 */
	struct ASoundDetector_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SoundDetector_BP.SoundDetector_BP_C.BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_0_OnSoundDetectionMeterChanged__DelegateSignature
	 */
	struct ASoundDetector_BP_C_BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_0_OnSoundDetectionMeterChanged__DelegateSignature_Params
	{
	public:
		float                                                      currentMeterRatio;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundDetector_BP.SoundDetector_BP_C.BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_1_OnSoundDetectionStateChanged__DelegateSignature
	 */
	struct ASoundDetector_BP_C_BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_1_OnSoundDetectionStateChanged__DelegateSignature_Params
	{
	public:
		EPlayerSoundDetectionState                                 oldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPlayerSoundDetectionState                                 newState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundDetector_BP.SoundDetector_BP_C.ExecuteUbergraph_SoundDetector_BP
	 */
	struct ASoundDetector_BP_C_ExecuteUbergraph_SoundDetector_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NM42[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
