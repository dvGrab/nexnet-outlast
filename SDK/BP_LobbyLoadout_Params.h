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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineCurrentProgress
	 */
	struct ABP_LobbyLoadout_C_DetermineCurrentProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.CanInteract
	 */
	struct ABP_LobbyLoadout_C_CanInteract_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.CanInteractThroughHitActors
	 */
	struct ABP_LobbyLoadout_C_CanInteractThroughHitActors_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineActionText
	 */
	struct ABP_LobbyLoadout_C_DetermineActionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineAnimatedIcon
	 */
	struct ABP_LobbyLoadout_C_DetermineAnimatedIcon_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineInputEvent
	 */
	struct ABP_LobbyLoadout_C_DetermineInputEvent_Params
	{
	public:
		EInputEvent                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineInteractionDistance
	 */
	struct ABP_LobbyLoadout_C_DetermineInteractionDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.GetInteractableComponent
	 */
	struct ABP_LobbyLoadout_C_GetInteractableComponent_Params
	{
	public:
		class UInteractableComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.ReceiveBeginPlay
	 */
	struct ABP_LobbyLoadout_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.ReceiveActorBeginOverlap
	 */
	struct ABP_LobbyLoadout_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.OnFocusLost
	 */
	struct ABP_LobbyLoadout_C_OnFocusLost_Params
	{
	public:
		class AReadyOrNotCharacter*                                InteractInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              InInteractableComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.Fire
	 */
	struct ABP_LobbyLoadout_C_Fire_Params
	{
	public:
		class AReadyOrNotCharacter*                                InteractInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              InInteractableComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.EndInteract
	 */
	struct ABP_LobbyLoadout_C_EndInteract_Params
	{
	public:
		class AReadyOrNotCharacter*                                InteractInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              InInteractableComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.OnFocusGain
	 */
	struct ABP_LobbyLoadout_C_OnFocusGain_Params
	{
	public:
		class AReadyOrNotCharacter*                                InteractInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              InInteractableComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.EndFire
	 */
	struct ABP_LobbyLoadout_C_EndFire_Params
	{
	public:
		class AReadyOrNotCharacter*                                InteractInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              InInteractableComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.MeleeInteract
	 */
	struct ABP_LobbyLoadout_C_MeleeInteract_Params
	{
	public:
		class AReadyOrNotCharacter*                                InteractInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              InInteractableComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.DoubleTapInteract
	 */
	struct ABP_LobbyLoadout_C_DoubleTapInteract_Params
	{
	public:
		class AReadyOrNotCharacter*                                InteractInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              InInteractableComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.Interact
	 */
	struct ABP_LobbyLoadout_C_Interact_Params
	{
	public:
		class AReadyOrNotCharacter*                                InteractInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              InInteractableComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyLoadout.BP_LobbyLoadout_C.ExecuteUbergraph_BP_LobbyLoadout
	 */
	struct ABP_LobbyLoadout_C_ExecuteUbergraph_BP_LobbyLoadout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8W7J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
