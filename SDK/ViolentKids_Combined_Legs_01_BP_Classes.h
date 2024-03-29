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
	 * BlueprintGeneratedClass ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C
	 * Size -> 0x0009 (FullSize[0x02A9] - InheritedSize[0x02A0])
	 */
	class AViolentKids_Combined_Legs_01_BP_C : public AViolentKids_Base_Slave_BP_C
	{
	public:
		class UCapsuleComponent*                                   Capsule;                                                 // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAttached;                                              // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateSex(bool IsGirl);
		void OnLoopDoneChanged();
		void Reset_Anims();
		void SetStillAttached(bool StillAttached);
		void Initialize(class AActor* AnimDriver);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
