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
	 * 		Name   -> Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.GetMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        SM_AlienSpiderCecoaliensa_Projectile                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Devourer_Projectile_C::GetMesh(class UStaticMeshComponent** SM_AlienSpiderCecoaliensa_Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.GetMesh");
		
		ABP_Devourer_Projectile_C_GetMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SM_AlienSpiderCecoaliensa_Projectile != nullptr)
			*SM_AlienSpiderCecoaliensa_Projectile = params.SM_AlienSpiderCecoaliensa_Projectile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Devourer_Projectile_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ReceiveTick");
		
		ABP_Devourer_Projectile_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Devourer_Projectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ReceiveBeginPlay");
		
		ABP_Devourer_Projectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.OnBloodSplatter
	 * 		Flags  -> ()
	 */
	void ABP_Devourer_Projectile_C::OnBloodSplatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.OnBloodSplatter");
		
		ABP_Devourer_Projectile_C_OnBloodSplatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ExecuteUbergraph_BP_Devourer_Projectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Devourer_Projectile_C::ExecuteUbergraph_BP_Devourer_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Devourer_Projectile.BP_Devourer_Projectile_C.ExecuteUbergraph_BP_Devourer_Projectile");
		
		ABP_Devourer_Projectile_C_ExecuteUbergraph_BP_Devourer_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Devourer_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Devourer_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Devourer_Projectile.BP_Devourer_Projectile_C");
		return ptr;
	}

}


