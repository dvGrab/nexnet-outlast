/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugLogLibrarySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugLogLibrarySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Debug.DebugLogLibrarySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Yo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Yo(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Yo");
		
		ULog_Yo_Params params {};
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Yes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Yes(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Yes");
		
		ULog_Yes_Params params {};
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Wassup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Wassup(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Wassup");
		
		ULog_Wassup_Params params {};
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Warning_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Warning_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Warning_WithCondition");
		
		ULog_Warning_WithCondition_Params params {};
		params.Message = Message;
		params.bCondition = bCondition;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Warning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Warning(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Warning");
		
		ULog_Warning_Params params {};
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Volume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InVolumeValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogVolumeUnit                                VolumeUnit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Volume(float InVolumeValue, EDebugLogVolumeUnit VolumeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Volume");
		
		ULog_Volume_Params params {};
		params.InVolumeValue = InVolumeValue;
		params.VolumeUnit = VolumeUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      InVector2D                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Vector2D(const struct FCoreUObject_FVector2D& InVector2D, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Vector2D");
		
		ULog_Vector2D_Params params {};
		params.InVector2D = InVector2D;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Vector(const struct FCoreUObject_FVector& InVector, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Vector");
		
		ULog_Vector_Params params {};
		params.InVector = InVector;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Valid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Valid(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Valid");
		
		ULog_Valid_Params params {};
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.UnImplemented
	 * 		Flags  -> ()
	 */
	void ULog::UnImplemented()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.UnImplemented");
		
		ULog_UnImplemented_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFormat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Transform(const struct FTransform& InTransform, const class FString& Prefix, bool bFormat, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Transform");
		
		ULog_Transform_Params params {};
		params.InTransform = InTransform;
		params.Prefix = Prefix;
		params.bFormat = bFormat;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTimeValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Time(float InTimeValue, EDebugLogTimeUnit TimeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Time");
		
		ULog_Time_Params params {};
		params.InTimeValue = InTimeValue;
		params.TimeUnit = TimeUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Temperature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTemperatureValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogTemperatureUnit                           TemperatureUnit                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Temperature(float InTemperatureValue, EDebugLogTemperatureUnit TemperatureUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Temperature");
		
		ULog_Temperature_Params params {};
		params.InTemperatureValue = InTemperatureValue;
		params.TemperatureUnit = TemperatureUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Success_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Success_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Success_WithCondition");
		
		ULog_Success_WithCondition_Params params {};
		params.Message = Message;
		params.bCondition = bCondition;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Success
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Success(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Success");
		
		ULog_Success_Params params {};
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.StopDebugTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAutoDetermineTimeUnit                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogTimeUnit                                  DisplayIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULog::StopDebugTimer(bool bAutoDetermineTimeUnit, EDebugLogTimeUnit DisplayIn, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.StopDebugTimer");
		
		ULog_StopDebugTimer_Params params {};
		params.bAutoDetermineTimeUnit = bAutoDetermineTimeUnit;
		params.DisplayIn = DisplayIn;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.StartDebugTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::StartDebugTimer(const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.StartDebugTimer");
		
		ULog_StartDebugTimer_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Speed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSpeedValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogSpeedUnit                                 SpeedUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Speed(float InSpeedValue, EDebugLogSpeedUnit SpeedUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Speed");
		
		ULog_Speed_Params params {};
		params.InSpeedValue = InSpeedValue;
		params.SpeedUnit = SpeedUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FRotator                       InRotator                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Rotator(const struct FCoreUObject_FRotator& InRotator, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Rotator");
		
		ULog_Rotator_Params params {};
		params.InRotator = InRotator;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Quat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FQuat                          Quaternion                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Quat(const struct FCoreUObject_FQuat& Quaternion, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Quat");
		
		ULog_Quat_Params params {};
		params.Quaternion = Quaternion;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Percent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Percent(float Number, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Percent");
		
		ULog_Percent_Params params {};
		params.Number = Number;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.ObjectValidity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSilenceOnError                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::ObjectValidity(class UObject* InObject, bool bSilenceOnError, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.ObjectValidity");
		
		ULog_ObjectValidity_Params params {};
		params.InObject = InObject;
		params.bSilenceOnError = bSilenceOnError;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.ObjectName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSilenceOnError                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::ObjectName(class UObject* InObject, bool bSilenceOnError, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.ObjectName");
		
		ULog_ObjectName_Params params {};
		params.InObject = InObject;
		params.bSilenceOnError = bSilenceOnError;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Number_Int_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogNumberSystems                             NumberSystem                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Number_Int_Blueprint(int32_t Number, const class FString& Prefix, const class FString& Suffix, EDebugLogNumberSystems NumberSystem, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Number_Int_Blueprint");
		
		ULog_Number_Int_Blueprint_Params params {};
		params.Number = Number;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.NumberSystem = NumberSystem;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Number_Float_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Number_Float_Blueprint(float Number, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Number_Float_Blueprint");
		
		ULog_Number_Float_Blueprint_Params params {};
		params.Number = Number;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.No
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::No(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.No");
		
		ULog_No_Params params {};
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.MessageInWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FontScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::MessageInWorld(const class FString& Message, const struct FCoreUObject_FVector& WorldLocation, float FontScale, const class FString& Prefix, const class FString& Suffix, float TimeToDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.MessageInWorld");
		
		ULog_MessageInWorld_Params params {};
		params.Message = Message;
		params.WorldLocation = WorldLocation;
		params.FontScale = FontScale;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.TimeToDisplay = TimeToDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Matrix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FMatrix                        InMatrix                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Matrix(const struct FCoreUObject_FMatrix& InMatrix, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Matrix");
		
		ULog_Matrix_Params params {};
		params.InMatrix = InMatrix;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Mass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMassValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogMassUnit                                  MassUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Mass(float InMassValue, EDebugLogMassUnit MassUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Mass");
		
		ULog_Mass_Params params {};
		params.InMassValue = InMassValue;
		params.MassUnit = MassUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.LineBreak_Symbol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Symbol                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::LineBreak_Symbol(const class FString& Symbol, ELoggingOptions LoggingOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.LineBreak_Symbol");
		
		ULog_LineBreak_Symbol_Params params {};
		params.Symbol = Symbol;
		params.LoggingOption = LoggingOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.LineBreak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::LineBreak(ELoggingOptions LoggingOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.LineBreak");
		
		ULog_LineBreak_Params params {};
		params.LoggingOption = LoggingOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Light
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLightValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogLightUnit                                 LightUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Light(float InLightValue, EDebugLogLightUnit LightUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Light");
		
		ULog_Light_Params params {};
		params.InLightValue = InLightValue;
		params.LightUnit = LightUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Length
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLengthValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogLengthUnit                                LengthUnit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Length(float InLengthValue, EDebugLogLengthUnit LengthUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Length");
		
		ULog_Length_Params params {};
		params.InLengthValue = InLengthValue;
		params.LengthUnit = LengthUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Invalid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Invalid(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Invalid");
		
		ULog_Invalid_Params params {};
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Info_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Info_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Info_WithCondition");
		
		ULog_Info_WithCondition_Params params {};
		params.Message = Message;
		params.bCondition = bCondition;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Info(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Info");
		
		ULog_Info_Params params {};
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.InBrackets_Text_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	class FText ULog::InBrackets_Text_Blueprint(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.InBrackets_Text_Blueprint");
		
		ULog_InBrackets_Text_Blueprint_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.InBrackets_String_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULog::InBrackets_String_Blueprint(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.InBrackets_String_Blueprint");
		
		ULog_InBrackets_String_Blueprint_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.InBrackets_Name_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULog::InBrackets_Name_Blueprint(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.InBrackets_Name_Blueprint");
		
		ULog_InBrackets_Name_Blueprint_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Hey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Hey(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Hey");
		
		ULog_Hey_Params params {};
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Hello
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Hello(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Hello");
		
		ULog_Hello_Params params {};
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Goodbye
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Goodbye(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Goodbye");
		
		ULog_Goodbye_Params params {};
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Frequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFrequencyValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogFrequencyUnit                             FrequencyUnit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Frequency(float InFrequencyValue, EDebugLogFrequencyUnit FrequencyUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Frequency");
		
		ULog_Frequency_Params params {};
		params.InFrequencyValue = InFrequencyValue;
		params.FrequencyUnit = FrequencyUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Force
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InForceValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogForceUnit                                 ForceUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Force(float InForceValue, EDebugLogForceUnit ForceUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Force");
		
		ULog_Force_Params params {};
		params.InForceValue = InForceValue;
		params.ForceUnit = ForceUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Fatal_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Fatal_WithCondition(const class FString& Message, bool bCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Fatal_WithCondition");
		
		ULog_Fatal_WithCondition_Params params {};
		params.Message = Message;
		params.bCondition = bCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Fatal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Fatal(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Fatal");
		
		ULog_Fatal_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Error_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Error_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Error_WithCondition");
		
		ULog_Error_WithCondition_Params params {};
		params.Message = Message;
		params.bCondition = bCondition;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Error
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Error(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Error");
		
		ULog_Error_Params params {};
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.EnsureObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlwaysEnsure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::EnsureObject(class UObject* Object, bool bAlwaysEnsure, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.EnsureObject");
		
		ULog_EnsureObject_Params params {};
		params.Object = Object;
		params.bAlwaysEnsure = bAlwaysEnsure;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.EnsureCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlwaysEnsure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::EnsureCondition(bool bCondition, bool bAlwaysEnsure, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.EnsureCondition");
		
		ULog_EnsureCondition_Params params {};
		params.bCondition = bCondition;
		params.bAlwaysEnsure = bAlwaysEnsure;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Dollar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDollarValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Dollar(float InDollarValue, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Dollar");
		
		ULog_Dollar_Params params {};
		params.InDollarValue = InDollarValue;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.DebugMessage_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDebugLogType                                      LogSeverity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::DebugMessage_WithCondition(EDebugLogType LogSeverity, bool bCondition, const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.DebugMessage_WithCondition");
		
		ULog_DebugMessage_WithCondition_Params params {};
		params.LogSeverity = LogSeverity;
		params.bCondition = bCondition;
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.DebugMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDebugLogType                                      LogSeverity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::DebugMessage(EDebugLogType LogSeverity, const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.DebugMessage");
		
		ULog_DebugMessage_Params params {};
		params.LogSeverity = LogSeverity;
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FDateTime                      InDateTime                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::DateTime(const struct FCoreUObject_FDateTime& InDateTime, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.DateTime");
		
		ULog_DateTime_Params params {};
		params.InDateTime = InDateTime;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDataValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogDataUnit                                  DataUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Data(float InDataValue, EDebugLogDataUnit DataUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Data");
		
		ULog_Data_Params params {};
		params.InDataValue = InDataValue;
		params.DataUnit = DataUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Cya
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Cya(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Cya");
		
		ULog_Cya_Params params {};
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Crash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FromFunction                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Crash(const class FString& Message, const class FString& FromFunction, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Crash");
		
		ULog_Crash_Params params {};
		params.Message = Message;
		params.FromFunction = FromFunction;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Color(const struct FLinearColor& InColor, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Color");
		
		ULog_Color_Params params {};
		params.InColor = InColor;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::CheckObject(class UObject* Object, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.CheckObject");
		
		ULog_CheckObject_Params params {};
		params.Object = Object;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckNoReEntry
	 * 		Flags  -> ()
	 */
	void ULog::CheckNoReEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.CheckNoReEntry");
		
		ULog_CheckNoReEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckNoRecursion
	 * 		Flags  -> ()
	 */
	void ULog::CheckNoRecursion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.CheckNoRecursion");
		
		ULog_CheckNoRecursion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckNoEntry
	 * 		Flags  -> ()
	 */
	void ULog::CheckNoEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.CheckNoEntry");
		
		ULog_CheckNoEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::CheckCondition(bool bCondition, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.CheckCondition");
		
		ULog_CheckCondition_Params params {};
		params.bCondition = bCondition;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Bye
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Bye(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Bye");
		
		ULog_Bye_Params params {};
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBoolToTest                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Bool(bool bBoolToTest, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Bool");
		
		ULog_Bool_Params params {};
		params.bBoolToTest = bBoolToTest;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertValue_Integer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogComparisonMethod                          ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertValue_Integer(int32_t Actual, int32_t Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertValue_Integer");
		
		ULog_AssertValue_Integer_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.ShouldBe = ShouldBe;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertValue_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogComparisonMethod                          ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertValue_Float(float Actual, float Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertValue_Float");
		
		ULog_AssertValue_Float_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.ShouldBe = ShouldBe;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertValue_DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FDateTime                      Actual                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FDateTime                      Expected                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogComparisonMethod                          ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertValue_DateTime(const struct FCoreUObject_FDateTime& Actual, const struct FCoreUObject_FDateTime& Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertValue_DateTime");
		
		ULog_AssertValue_DateTime_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.ShouldBe = ShouldBe;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Vector2D(const struct FCoreUObject_FVector2D& Actual, const struct FCoreUObject_FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_Vector2D");
		
		ULog_AssertNotEqual_Vector2D_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Vector(const struct FCoreUObject_FVector& Actual, const struct FCoreUObject_FVector& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_Vector");
		
		ULog_AssertNotEqual_Vector_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     Actual                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     Expected                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_Transform");
		
		ULog_AssertNotEqual_Transform_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bNoScale = bNoScale;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Actual                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Expected                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_String");
		
		ULog_AssertNotEqual_String_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FRotator                       Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Rotator(const struct FCoreUObject_FRotator& Actual, const struct FCoreUObject_FRotator& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_Rotator");
		
		ULog_AssertNotEqual_Rotator_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Quat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FQuat                          Actual                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FQuat                          Expected                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Quat(const struct FCoreUObject_FQuat& Actual, const struct FCoreUObject_FQuat& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_Quat");
		
		ULog_AssertNotEqual_Quat_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Object
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_Object");
		
		ULog_AssertNotEqual_Object_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Name(const class FName& Actual, const class FName& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_Name");
		
		ULog_AssertNotEqual_Name_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FColor                         Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                         Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertNotEqual_Color");
		
		ULog_AssertNotEqual_Color_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Vector2D(const struct FCoreUObject_FVector2D& Actual, const struct FCoreUObject_FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Vector2D");
		
		ULog_AssertEqual_Vector2D_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Vector(const struct FCoreUObject_FVector& Actual, const struct FCoreUObject_FVector& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Vector");
		
		ULog_AssertEqual_Vector_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     Actual                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     Expected                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Transform");
		
		ULog_AssertEqual_Transform_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bNoScale = bNoScale;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Actual                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Expected                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_String");
		
		ULog_AssertEqual_String_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FRotator                       Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Rotator(const struct FCoreUObject_FRotator& Actual, const struct FCoreUObject_FRotator& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Rotator");
		
		ULog_AssertEqual_Rotator_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Quat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FQuat                          Actual                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FQuat                          Expected                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Quat(const struct FCoreUObject_FQuat& Actual, const struct FCoreUObject_FQuat& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Quat");
		
		ULog_AssertEqual_Quat_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Object
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Object");
		
		ULog_AssertEqual_Object_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Name(const class FName& Actual, const class FName& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Name");
		
		ULog_AssertEqual_Name_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Integer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Integer(int32_t Actual, int32_t Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Integer");
		
		ULog_AssertEqual_Integer_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Float(float Actual, float Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Float");
		
		ULog_AssertEqual_Float_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FDateTime                      Actual                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FDateTime                      Expected                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_DateTime(const struct FCoreUObject_FDateTime& Actual, const struct FCoreUObject_FDateTime& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_DateTime");
		
		ULog_AssertEqual_DateTime_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FColor                         Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                         Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Color");
		
		ULog_AssertEqual_Color_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActual                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExpected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Bool(bool bActual, bool bExpected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.AssertEqual_Bool");
		
		ULog_AssertEqual_Bool_Params params {};
		params.bActual = bActual;
		params.bExpected = bExpected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Assert_True
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::Assert_True(bool bCondition, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Assert_True");
		
		ULog_Assert_True_Params params {};
		params.bCondition = bCondition;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Assert_IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::Assert_IsValid(class UObject* Object, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Assert_IsValid");
		
		ULog_Assert_IsValid_Params params {};
		params.Object = Object;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Assert_False
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::Assert_False(bool bCondition, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Assert_False");
		
		ULog_Assert_False_Params params {};
		params.bCondition = bCondition;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FVector2D>              inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Vector2D(TArray<struct FCoreUObject_FVector2D> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Vector2D");
		
		ULog_Array_Vector2D_Params params {};
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FVector>                inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Vector(TArray<struct FCoreUObject_FVector> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Vector");
		
		ULog_Array_Vector_Params params {};
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTransform>             inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Transform(TArray<struct FTransform> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Transform");
		
		ULog_Array_Transform_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Text(TArray<class FText> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Text");
		
		ULog_Array_Text_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_String(TArray<class FString> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_String");
		
		ULog_Array_String_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FRotator>               inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Rotator(TArray<struct FCoreUObject_FRotator> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Rotator");
		
		ULog_Array_Rotator_Params params {};
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Quat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FQuat>                  inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Quat(TArray<struct FCoreUObject_FQuat> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Quat");
		
		ULog_Array_Quat_Params params {};
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Name(TArray<class FName> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Name");
		
		ULog_Array_Name_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Matrix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FMatrix>                inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Matrix(TArray<struct FCoreUObject_FMatrix> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Matrix");
		
		ULog_Array_Matrix_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Int64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int64_t>                                    inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Int64(TArray<int64_t> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Int64");
		
		ULog_Array_Int64_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Int32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Int32(TArray<int32_t> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Int32");
		
		ULog_Array_Int32_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Float(TArray<float> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Float");
		
		ULog_Array_Float_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FDateTime>              inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_DateTime(TArray<struct FCoreUObject_FDateTime> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_DateTime");
		
		ULog_Array_DateTime_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Color(TArray<struct FLinearColor> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Color");
		
		ULog_Array_Color_Params params {};
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Array_Bool(TArray<bool> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Array_Bool");
		
		ULog_Array_Bool_Params params {};
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Angle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAngleValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogAngularUnit                               AngleUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULog::Angle(float InAngleValue, EDebugLogAngularUnit AngleUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug.Log.Angle");
		
		ULog_Angle_Params params {};
		params.InAngleValue = InAngleValue;
		params.AngleUnit = AngleUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULog.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULog::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Debug.Log");
		return ptr;
	}

}


