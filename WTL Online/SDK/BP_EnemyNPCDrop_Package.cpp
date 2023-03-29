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
	 * 		Name   -> PredefinedFunction ABP_EnemyNPCDrop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EnemyNPCDrop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyNPCDrop.BP_EnemyNPCDrop_C");
		return ptr;
	}

}


