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
	 * BlueprintGeneratedClass OPP_Persistent.OPP_Persistent_C
	 * Size -> 0x0030 (FullSize[0x0280] - InheritedSize[0x0250])
	 */
	class AOPP_Persistent_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        DrugEnvironmentLevels;                                   // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                DefaultDrugLevel;                                        // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DrugStartLevel;                                          // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DrugEndLevel;                                            // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void bpiBlurEntity();
		void StartDrugSpray();
		void StopDrugSpray();
		void CloseLight();
		void ReceiveBeginPlay();
		void OnRBStreamingLoaded(class ARBStreaming* RBStreaming);
		void InitDrugSequences();
		void ExecuteUbergraph_OPP_Persistent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
