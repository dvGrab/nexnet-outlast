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
	 * BlueprintGeneratedClass RBController_BP.RBController_BP_C
	 * Size -> 0x1268 (FullSize[0x1D00] - InheritedSize[0x0A98])
	 */
	class ARBController_BP_C : public ARBController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A98(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             MouseWheel;                                              // 0x0AA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class AActor*>                                      DebugPerfActors;                                         // 0x0AB0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ARBBot*>                                      DebugPerfBots;                                           // 0x0AC0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FAIConfigData                                       DebugPerfAIConfig;                                       // 0x0AD0(0x1230) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_RBController_BP(int32_t EntryPoint);
		void MouseWheel__DelegateSignature(float Axis, bool Shift, bool Alt);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
