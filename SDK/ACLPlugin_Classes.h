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
	 * Class ACLPlugin.AnimationCompressionLibraryDatabase
	 * Size -> 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
	 */
	class UAnimationCompressionLibraryDatabase : public UObject
	{
	public:
		TArray<unsigned char>                                      CookedCompressedBytes;                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<uint64_t>                                           CookedAnimSequenceMappings;                              // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F2OL[0x110];                                 // 0x0048(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxStreamRequestSizeKB;                                  // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I2AS[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, EACLVisualFidelityChangeResult* Result, EACLVisualFidelity VisualFidelity);
		EACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset);
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACL
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
	{
	public:
		class UAnimBoneCompressionCodec*                           SafetyFallbackCodec;                                     // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
	{
	public:
		class UAnimationCompressionLibraryDatabase*                DatabaseAsset;                                           // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimCurveCompressionCodec_ACL
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
