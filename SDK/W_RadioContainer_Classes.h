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
	 * BlueprintGeneratedClass W_RadioContainer.W_RadioContainer_C
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UW_RadioContainer_C : public UOverlay
	{
	public:
		unsigned char                                              RadioChildren[0x10];                                     // 0x0130(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              SelectedChild[0x10];                                     // 0x0140(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		void OnNewChildSelected();
		void RegisterRadioChild();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
