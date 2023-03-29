/**
 * Name: WTL
 * Version: 4.26.2
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
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetPostProcessColorTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                PostProcessColor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_BP_C::GetPostProcessColorTint(struct FLinearColor* PostProcessColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetPostProcessColorTint");
		
		AUltra_Dynamic_Sky_BP_C_GetPostProcessColorTint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PostProcessColor != nullptr)
			*PostProcessColor = params.PostProcessColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetWeatherScheme
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWTLWeatherType                                    WeatherType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FST_WeatherScheme                           Scheme                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_BP_C::GetWeatherScheme(EWTLWeatherType WeatherType, struct FST_WeatherScheme* Scheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetWeatherScheme");
		
		AUltra_Dynamic_Sky_BP_C_GetWeatherScheme_Params params {};
		params.WeatherType = WeatherType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scheme != nullptr)
			*Scheme = params.Scheme;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_BP_C::SetMaterialVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables");
		
		AUltra_Dynamic_Sky_BP_C_SetMaterialVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_BP_C::SetSolarAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle");
		
		AUltra_Dynamic_Sky_BP_C_SetSolarAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript");
		
		AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay");
		
		AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick");
		
		AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_BP_C::ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP");
		
		AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUltra_Dynamic_Sky_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUltra_Dynamic_Sky_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C");
		return ptr;
	}

}


