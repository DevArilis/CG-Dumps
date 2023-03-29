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
	 * 		Name   -> Function BP_BirdFly_001.BP_BirdFly_001_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BirdFly_001_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BirdFly_001.BP_BirdFly_001_C.ReceiveTick");
		
		ABP_BirdFly_001_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BirdFly_001.BP_BirdFly_001_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BirdFly_001_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BirdFly_001.BP_BirdFly_001_C.ReceiveBeginPlay");
		
		ABP_BirdFly_001_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BirdFly_001.BP_BirdFly_001_C.ExecuteUbergraph_BP_BirdFly_001
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BirdFly_001_C::ExecuteUbergraph_BP_BirdFly_001(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BirdFly_001.BP_BirdFly_001_C.ExecuteUbergraph_BP_BirdFly_001");
		
		ABP_BirdFly_001_C_ExecuteUbergraph_BP_BirdFly_001_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BirdFly_001_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BirdFly_001_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BirdFly_001.BP_BirdFly_001_C");
		return ptr;
	}

}


