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
	 * BlueprintGeneratedClass Orph_ScriptedMannequin_Cafeteria_EatingFork_Child.Orph_ScriptedMannequin_Cafeteria_EatingFork_Child_C
	 * Size -> 0x0010 (FullSize[0x0488] - InheritedSize[0x0478])
	 */
	class AOrph_ScriptedMannequin_Cafeteria_EatingFork_Child_C : public AOrph_ScriptedMannequin_CafeteriaBase_C
	{
	public:
		class UCapsuleComponent*                                   Capsule;                                                 // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Fork;                                                    // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
