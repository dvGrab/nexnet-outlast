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
	 * BlueprintGeneratedClass Brick_Weapon_BP.Brick_Weapon_BP_C
	 * Size -> 0x0008 (FullSize[0x0B50] - InheritedSize[0x0B48])
	 */
	class ABrick_Weapon_BP_C : public ASimpleMesh_ThrowableWeapon_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B48(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BP_OnGroundAndPoundCounter();
		void ExecuteUbergraph_Brick_Weapon_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
