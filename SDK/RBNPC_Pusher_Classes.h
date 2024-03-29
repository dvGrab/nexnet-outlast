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
	 * BlueprintGeneratedClass RBNPC_Pusher.RBNPC_Pusher_C
	 * Size -> 0x0010 (FullSize[0x5678] - InheritedSize[0x5668])
	 */
	class ARBNPC_Pusher_C : public ARBNPC_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              FullBody_Mesh;                                           // 0x5670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetNormalMeshVisibility(bool bVisible);
		void ExecuteUbergraph_RBNPC_Pusher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
