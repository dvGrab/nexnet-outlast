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
	 * BlueprintGeneratedClass PoliceStation_Patrol_Corridor_01_ART.PoliceStation_Patrol_Corridor-01_ART_C
	 * Size -> 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
	 */
	class APoliceStation_Patrol_Corridor01_ART_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AElectrocutionDevice_BP_C*                           ElectrocutionDevice_BP_2_ExecuteUbergraph_PoliceStation_Patrol_Corridor01_ART_RefProperty; // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheatOpenCage();
		void CageBlast();
		void ExecuteUbergraph_PoliceStation_Patrol_Corridor01_ART(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
