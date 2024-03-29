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
	 * BlueprintGeneratedClass SJ_JukeBox_01_BP.SJ_JukeBox-01_BP_C
	 * Size -> 0x0039 (FullSize[0x0521] - InheritedSize[0x04E8])
	 */
	class ASJ_JukeBox01_BP_C : public ARBScareJumpBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                JukeBoxMesh;                                             // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight;                                             // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        JukeboxColors_NewTrack_0_032DF396463CE6D041BFEBB7ACD5AA1B; // 0x0500(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         JukeboxColors__Direction_032DF396463CE6D041BFEBB7ACD5AA1B; // 0x0510(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S2ES[0x7];                                   // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  JukeboxColors;                                           // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseJukeboxSpotlight;                                     // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetPreviewAssetsVisibility(bool Preview);
		void JukeboxColors__FinishedFunc();
		void JukeboxColors__UpdateFunc();
		void Event_OnTriggered();
		void Event_OnUntriggered();
		void Event_OnResetStage();
		void ExecuteUbergraph_SJ_JukeBox01_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
