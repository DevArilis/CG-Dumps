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
	 * 		Name   -> Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ElectricLightBlinkMainMenu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.UserConstructionScript");
		
		ABP_ElectricLightBlinkMainMenu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ElectricLightBlinkMainMenu_C::Blink__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__FinishedFunc");
		
		ABP_ElectricLightBlinkMainMenu_C_Blink__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ElectricLightBlinkMainMenu_C::Blink__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.Blink__UpdateFunc");
		
		ABP_ElectricLightBlinkMainMenu_C_Blink__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ElectricLightBlinkMainMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ReceiveBeginPlay");
		
		ABP_ElectricLightBlinkMainMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ExecuteUbergraph_BP_ElectricLightBlinkMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ElectricLightBlinkMainMenu_C::ExecuteUbergraph_BP_ElectricLightBlinkMainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C.ExecuteUbergraph_BP_ElectricLightBlinkMainMenu");
		
		ABP_ElectricLightBlinkMainMenu_C_ExecuteUbergraph_BP_ElectricLightBlinkMainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ElectricLightBlinkMainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ElectricLightBlinkMainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C");
		return ptr;
	}

}


