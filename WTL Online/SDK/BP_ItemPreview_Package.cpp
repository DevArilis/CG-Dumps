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
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemPreview_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay");
		
		ABP_ItemPreview_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemPreview_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveTick");
		
		ABP_ItemPreview_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ItemPreview_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay");
		
		ABP_ItemPreview_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemPreview_C::ExecuteUbergraph_BP_ItemPreview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview");
		
		ABP_ItemPreview_C_ExecuteUbergraph_BP_ItemPreview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemPreview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemPreview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemPreview.BP_ItemPreview_C");
		return ptr;
	}

}


