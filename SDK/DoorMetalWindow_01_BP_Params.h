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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.BP_OnDoorInteract
	 */
	struct ADoorMetalWindow__BP_C_BP_OnDoorInteract_Params
	{
	public:
		class ARBPawn*                                             interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.ExecuteUbergraph_DoorMetalWindow-01_BP
	 */
	struct ADoorMetalWindow__BP_C_ExecuteUbergraph_DoorMetalWindow__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.DoorInteracted__DelegateSignature
	 */
	struct ADoorMetalWindow__BP_C_DoorInteracted__DelegateSignature_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
