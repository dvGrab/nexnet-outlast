#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * BlueprintGeneratedClass LOBBY_START_Blueprint.LOBBY_START_Blueprint_C
	 * Size -> 0x000F (FullSize[0x0288] - InheritedSize[0x0279])
	 */
	class ALOBBY_START_Blueprint_C : public ADefaultPlayerStart_C
	{
	public:
		unsigned char                                              UnknownData_02MM[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void CustomEvent_1();
		void ExecuteUbergraph_LOBBY_START_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
