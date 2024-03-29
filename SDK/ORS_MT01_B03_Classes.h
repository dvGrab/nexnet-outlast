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
	 * BlueprintGeneratedClass ORS_MT01_B03.ORS_MT01_B03_C
	 * Size -> 0x01F0 (FullSize[0x0448] - InheritedSize[0x0258])
	 */
	class AORS_MT01_B03_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              RG_BackAlley[0x28];                                      // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RG_Church[0x28];                                         // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RG_Services[0x28];                                       // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RG_Kitchen[0x28];                                        // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Cauldron[0x28];                                          // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CafeteriaRollingGate[0x28];                              // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              KitchenRollingGate[0x28];                                // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CafeteriaDoor[0x28];                                     // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBlockingVolume*                                   RBBlockingVolume_Courtyard_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_BellyAching_C*     Orph_ScriptedMannequin_Cafeteria_BellyAching_2_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_Drinking_C*        Orph_ScriptedMannequin_Cafeteria_Drinking_2_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_HittingTable_C*    Orph_ScriptedMannequin_Cafeteria_HittingTable_2_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_EatingBowl_C*      Orph_ScriptedMannequin_Cafeteria_EatingBowl_2_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_HittingTable_C*    Orph_ScriptedMannequin_Cafeteria_HittingTable2_5_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_EatingFork_Child_C* Orph_ScriptedMannequin_Cafeteria_EatingFork_Child_2_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_BangTable_Child_C* Orph_ScriptedMannequin_Cafeteria_BangTable_Child2_5_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_BellyAching_C*     Orph_ScriptedMannequin_Cafeteria_BellyAching4_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_EatingBowl_C*      Orph_ScriptedMannequin_Cafeteria_EatingBowl2_2_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_BangTable_Child_C* Orph_ScriptedMannequin_Cafeteria_BangTable_Child3_2_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_Drinking_C*        Orph_ScriptedMannequin_Cafeteria_Drinking4_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_BellyAching_C*     Orph_ScriptedMannequin_Cafeteria_BellyAching5_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_BangTable_Child_C* Orph_ScriptedMannequin_Cafeteria_BangTable_Child4_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOrph_ScriptedMannequin_Cafeteria_HittingTable_C*    Orph_ScriptedMannequin_Cafeteria_HittingTable6_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABloodPipeBase_BP_C*                                 BloodPipeBase_BP12_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABloodPipeBase_BP_C*                                 BloodPipeBase_BP13_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABloodPipeBase_BP_C*                                 BloodPipeBase_BP15_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0428(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABloodPipeBase_BP_C*                                 BloodPipeBase_BP14_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBlockingVolume*                                   RBBlockingVolume_CafeteriaSideRoom_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0438(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBlockingVolume*                                   RBBlockingVolume_Kitchen_ExecuteUbergraph_ORS_MT01_B03_RefProperty; // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TriggerMannequins();
		void TriggerPipes();
		void B03_Regroup_ObjStarted();
		void B03_Regroup_ObjCompleted();
		void B03_Delay_ObjStarted();
		void B03_ExitStage_Started();
		void ExecuteUbergraph_ORS_MT01_B03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
