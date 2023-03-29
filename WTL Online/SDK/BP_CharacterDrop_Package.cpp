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
	 * 		Name   -> PredefinedFunction ABP_CharacterDrop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CharacterDrop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterDrop.BP_CharacterDrop_C");
		return ptr;
	}

}


