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
	 * BlueprintGeneratedClass ElectricalSwitch_RollingdoorVariator_01_BP.ElectricalSwitch-RollingdoorVariator-01_BP_C
	 * Size -> 0x0010 (FullSize[0x0760] - InheritedSize[0x0750])
	 */
	class AElectricalSwitch_RollingdoorVariator__BP_C : public ABASE_ElectricalSwitch__BP_C
	{
	public:
		class URBActiveSkillVisionComponent*                       ActiveSkillVisionComponent;                              // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ActiveSkillWaveSphere;                                   // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void TryResetSwitch();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
