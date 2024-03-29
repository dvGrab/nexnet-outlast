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
	 * BlueprintGeneratedClass PoliceStation_T02_SE.PoliceStation_T02_SE_C
	 * Size -> 0x00F8 (FullSize[0x0350] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_SE_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ARBBot*                                              NPC_EatingGrunt;                                         // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_GruntFuckerTop;                                      // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_AssScare;                                            // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_DickScare;                                           // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRBAIConditionSet                                   NOTCloseToAnyPlayer;                                     // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ARBBot*                                              B01_Coyle;                                               // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APushable_OnRail_Snitch_BP_C*                        B01_Snitch;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExitAnimTime;                                            // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LTEW[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASE_T02_Torturing_BP_C*                              SE_T02_Torturing_BP_2_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypoint*                                         RBWaypoint_S01_Coyle_3_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AExecutionGuard_Guarding_01_BP_C*                    ExecutionGuard_Guarding_01_BP_2_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AExecutionWitness_Chair_04_BP_C*                     ExecutionWitness_Chair_04_BP_2_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AExecutionWitness_Observer_01_BP_C*                  ExecutionWitness_Observer_01_BP_2_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AExecutionWitness_Chair_03_BP_C*                     ExecutionWitness_Chair_03_BP_2_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AExecutionWitness_Chair_02_BP_C*                     ExecutionWitness_Chair_02_BP_2_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AExecutionWitness_Chair_01_BP_C*                     ExecutionWitness_Chair_01_BP_2_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_Coyle_C*                                  NPC_Spawn_Coyle_2_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPositionMarker*                                   SE_RBPositionMarker_PrisonerFuck_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientActivityMarker*                            SE_RBAmbientActivityMarker_PrisonerFuck_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientActivityMarker*                            SE_RBAmbientActivityMarker_PrisonerFuck02_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPositionMarker*                                   SE_RBPositionMarker_PrisonerGuts_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientActivityMarker*                            SE_RBAmbientActivityMarker_PrisonerGuts_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientActivityMarker*                            SE_RBAmbientActivityMarker_PrisonerGuts02_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0318(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientActivityMarker*                            SE_RBAmbientActivityMarker_PrisonerBurnsAssHole_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPositionMarker*                                   SE_RBPositionMarker_PrisonerBurnsAss_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientActivityMarker*                            SE_RBAmbientActivityMarker_PrisonerBurnsAssHole02_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientActivityMarker*                            SE_RBAmbientActivityMarker_PrisonerBurnsDick_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPositionMarker*                                   SE_RBPositionMarker_PrisonerBurnsDick_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientActivityMarker*                            SE_RBAmbientActivityMarker_PrisonerBurnsDick02_ExecuteUbergraph_PoliceStation_T02_SE_RefProperty; // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SE_SwitchState_JailNPC();
		void StartCoyleScriptedEvent();
		void StartSnitchScriptedEvent();
		void SE_Spawn_AI_Jail();
		void PS_T02B06_SE_WitnessStart();
		void Cheat_StartSnitchTorture();
		void SE_B01Setup();
		void SE_PrisonerFuck_Exit();
		void SE_PrisonerGuts_Exit();
		void SE_PrisonnerBurnsDick_Exit();
		void SE_PrisonerBurnsAsshole_Exit();
		void ExecuteUbergraph_PoliceStation_T02_SE(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
