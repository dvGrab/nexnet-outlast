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
	 * UserDefinedStruct NPCSkinData.NPCSkinData
	 * Size -> 0x00B8
	 */
	struct FNPCSkinData
	{
	public:
		unsigned char                                              Body_19_F0B9AD72489F136FA88F1CB7C5A0967F[0x28];          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Head_21_60798B714A0D854309821F8331AD738A[0x28];          // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Hair_22_DA3335004EB9C8BA309DE1A5CB7AA853[0x28];          // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ExtraBodyMeshes_28_1566464147D3B561A7F05CAF09340C28[0x10]; // 0x0078(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              FacePoses_23_0DC0F466467315AA98BDCEB4FD27BC36[0x28];     // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                FoleyTypeSwitch_12_FD0671B84738FC37A2A31682A2E19595;     // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
