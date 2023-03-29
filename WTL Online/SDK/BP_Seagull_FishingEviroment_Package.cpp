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
	 * 		Name   -> Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.OnIsAlive
	 * 		Flags  -> ()
	 */
	void ABP_Seagull_FishingEviroment_C::OnIsAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.OnIsAlive");
		
		ABP_Seagull_FishingEviroment_C_OnIsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.OnRep_IsAlive
	 * 		Flags  -> ()
	 */
	void ABP_Seagull_FishingEviroment_C::OnRep_IsAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.OnRep_IsAlive");
		
		ABP_Seagull_FishingEviroment_C_OnRep_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Seagull_FishingEviroment_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveBeginPlay");
		
		ABP_Seagull_FishingEviroment_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Seagull_FishingEviroment_C::BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Seagull_FishingEviroment_C_BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Seagull_FishingEviroment_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveTick");
		
		ABP_Seagull_FishingEviroment_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Seagull_FishingEviroment_C::BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_Seagull_FishingEviroment_C_BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Seagull_FishingEviroment_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveAnyDamage");
		
		ABP_Seagull_FishingEviroment_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ExecuteUbergraph_BP_Seagull_FishingEviroment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Seagull_FishingEviroment_C::ExecuteUbergraph_BP_Seagull_FishingEviroment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ExecuteUbergraph_BP_Seagull_FishingEviroment");
		
		ABP_Seagull_FishingEviroment_C_ExecuteUbergraph_BP_Seagull_FishingEviroment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Seagull_FishingEviroment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Seagull_FishingEviroment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C");
		return ptr;
	}

}


