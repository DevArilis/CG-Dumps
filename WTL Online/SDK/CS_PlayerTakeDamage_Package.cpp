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
	 * 		Name   -> PredefinedFunction UCS_PlayerTakeDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_PlayerTakeDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_PlayerTakeDamage.CS_PlayerTakeDamage_C");
		return ptr;
	}

}


