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
	 * Class DLSSBlueprint.DLSSLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDLSSLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetDLSSSharpness(float Sharpness);
		void SetDLSSMode(EUDLSSMode DLSSMode);
		EUDLSSSupport QueryDLSSSupport();
		EUDLSSSupport QueryDLSSRRSupport();
		bool IsDLSSSupported();
		bool IsDLSSRRSupported();
		bool IsDLSSRREnabled();
		bool IsDLSSModeSupported(EUDLSSMode DLSSMode);
		bool IsDLSSEnabled();
		bool IsDLAAEnabled();
		TArray<EUDLSSMode> GetSupportedDLSSModes();
		float GetDLSSSharpness();
		void GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
		void GetDLSSRRMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor);
		void GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness);
		EUDLSSMode GetDLSSMode();
		void GetDLSSMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor);
		EUDLSSMode GetDefaultDLSSMode();
		void EnableDLSSRR(bool bEnabled);
		void EnableDLSS(bool bEnabled);
		void EnableDLAA(bool bEnabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
