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
	 * BlueprintGeneratedClass ORS_MT01_B02.ORS_MT01_B02_C
	 * Size -> 0x0080 (FullSize[0x02D8] - InheritedSize[0x0258])
	 */
	class AORS_MT01_B02_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              RG_Services[0x28];                                       // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RG_Church[0x28];                                         // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              coordinator[0x28];                                       // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void B02_GatherAndDeliver_SingleObjCompleted();
		void ExecuteUbergraph_ORS_MT01_B02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
