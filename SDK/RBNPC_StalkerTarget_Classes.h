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
	 * BlueprintGeneratedClass RBNPC_StalkerTarget.RBNPC_StalkerTarget_C
	 * Size -> 0x0010 (FullSize[0x5850] - InheritedSize[0x5840])
	 */
	class ARBNPC_StalkerTarget_C : public ARBNPC_Grunt_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5840(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBObjectiveActorComponent*                          RBObjectiveActor;                                        // 0x5848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void CustomizeCharacter();
		void UserConstructionScript();
		void Event_OnHeadBoom();
		void ExecuteUbergraph_RBNPC_StalkerTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
