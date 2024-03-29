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
	 * BlueprintGeneratedClass CorpseSearch_PS_Trial02_OnChair_BP.CorpseSearch_PS_Trial02_OnChair_BP_C
	 * Size -> 0x0008 (FullSize[0x06B8] - InheritedSize[0x06B0])
	 */
	class ACorpseSearch_PS_Trial02_OnChair_BP_C : public ACorpseSearch_BP_C
	{
	public:
		class UStaticMeshComponent*                                Chair;                                                   // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
