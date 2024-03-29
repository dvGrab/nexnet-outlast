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
	 * BlueprintGeneratedClass SimpleMesh_ThrowableWeapon_BP.SimpleMesh_ThrowableWeapon_BP_C
	 * Size -> 0x0008 (FullSize[0x0B48] - InheritedSize[0x0B40])
	 */
	class ASimpleMesh_ThrowableWeapon_BP_C : public ABase_ThrowableWeapon_BP_C
	{
	public:
		class UStaticMeshComponent*                                ItemWorldMesh;                                           // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
