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
	 * BlueprintGeneratedClass ViolentKids_Interface_BP.ViolentKids_Interface_BP_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UViolentKids_Interface_BP_C : public UInterface
	{
	public:
		void GetPropAnimationData(class UViolentKids_MannequinData_BP_C** New_Param);
		void GetAnimationData(class UViolentKids_MannequinData_BP_C** Data);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
