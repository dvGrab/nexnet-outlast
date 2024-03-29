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
	 * BlueprintGeneratedClass RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URebindFieldFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void Using_Modifier_Key(TArray<struct FKey>* Key_List, TArray<EKeyModifiers>* Modifiers, class UObject* __WorldContext, bool* Return_Value);
		void Key_list_has_Non_Modifier_Key(TArray<struct FKey>* Key_List, class UObject* __WorldContext, bool* Return_Value);
		void Abbreviate_Key(const struct FKey& Key, class UObject* __WorldContext, class FString* Abreviated_Name);
		void Key_is_Non_Modifier_Key(const struct FKey& Key, class UObject* __WorldContext, bool* Return_Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
