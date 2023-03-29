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
	 * 		Name   -> Function BP_Container20Poz4.BP_Container20Poz4_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Container20Poz4_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Container20Poz4.BP_Container20Poz4_C.UserConstructionScript");
		
		ABP_Container20Poz4_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Container20Poz4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Container20Poz4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Container20Poz4.BP_Container20Poz4_C");
		return ptr;
	}

}


