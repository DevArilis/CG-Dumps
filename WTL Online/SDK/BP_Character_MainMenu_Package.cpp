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
	 * 		Name   -> Function BP_Character_MainMenu.BP_Character_MainMenu_C.EyeBlink__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Character_MainMenu_C::EyeBlink__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_MainMenu.BP_Character_MainMenu_C.EyeBlink__FinishedFunc");
		
		ABP_Character_MainMenu_C_EyeBlink__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_MainMenu.BP_Character_MainMenu_C.EyeBlink__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Character_MainMenu_C::EyeBlink__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_MainMenu.BP_Character_MainMenu_C.EyeBlink__UpdateFunc");
		
		ABP_Character_MainMenu_C_EyeBlink__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_MainMenu.BP_Character_MainMenu_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Character_MainMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_MainMenu.BP_Character_MainMenu_C.ReceiveBeginPlay");
		
		ABP_Character_MainMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_MainMenu.BP_Character_MainMenu_C.ExecuteUbergraph_BP_Character_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_MainMenu_C::ExecuteUbergraph_BP_Character_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_MainMenu.BP_Character_MainMenu_C.ExecuteUbergraph_BP_Character_MainMenu");
		
		ABP_Character_MainMenu_C_ExecuteUbergraph_BP_Character_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Character_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Character_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_MainMenu.BP_Character_MainMenu_C");
		return ptr;
	}

}


