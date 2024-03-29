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
	 * BlueprintGeneratedClass RemoteCameraIntercom_01_BP.RemoteCameraIntercom-01_BP_C
	 * Size -> 0x0038 (FullSize[0x0690] - InheritedSize[0x0658])
	 */
	class ARemoteCameraIntercom__BP_C : public ARBOperatable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0658(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ACameraIntercom__BP_C*>                       CameraIntercoms;                                         // 0x0668(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ACameraIntercom__BP_C*                               CurrentIntercom;                                         // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnForcePlayerExit;                                       // 0x0680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetAllCameraIntercoms();
		void Event_OnCompletedOperation(TArray<class ARBPawn*> pawns);
		void ExecuteUbergraph_RemoteCameraIntercom__BP(int32_t EntryPoint);
		void OnForcePlayerExit__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
