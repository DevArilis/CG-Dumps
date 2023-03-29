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
	 * 		Name   -> PredefinedFunction UWTLSteamHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLSteamHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLSteamHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLSteamMainMenuLevelScriptActor.ShowInventoryItems
	 * 		Flags  -> ()
	 */
	void AWTLSteamMainMenuLevelScriptActor::ShowInventoryItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLSteamMainMenuLevelScriptActor.ShowInventoryItems");
		
		AWTLSteamMainMenuLevelScriptActor_ShowInventoryItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLSteamMainMenuLevelScriptActor.Authorize
	 * 		Flags  -> ()
	 */
	void AWTLSteamMainMenuLevelScriptActor::Authorize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLSteamMainMenuLevelScriptActor.Authorize");
		
		AWTLSteamMainMenuLevelScriptActor_Authorize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLSteamMainMenuLevelScriptActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLSteamMainMenuLevelScriptActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLSteamMainMenuLevelScriptActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLSteelTarget.OnRep_RecoveryCooldown
	 * 		Flags  -> ()
	 */
	void AWTLSteelTarget::OnRep_RecoveryCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLSteelTarget.OnRep_RecoveryCooldown");
		
		AWTLSteelTarget_OnRep_RecoveryCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLSteelTarget.OnRep_IsActivate
	 * 		Flags  -> ()
	 */
	void AWTLSteelTarget::OnRep_IsActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLSteelTarget.OnRep_IsActivate");
		
		AWTLSteelTarget_OnRep_IsActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLSteelTarget.NetMulticast_UpdateImpulseValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Impulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLSteelTarget::NetMulticast_UpdateImpulseValue(float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLSteelTarget.NetMulticast_UpdateImpulseValue");
		
		AWTLSteelTarget_NetMulticast_UpdateImpulseValue_Params params {};
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLSteelTarget.Deactivate
	 * 		Flags  -> ()
	 */
	void AWTLSteelTarget::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLSteelTarget.Deactivate");
		
		AWTLSteelTarget_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLSteelTarget.BPOnTargetHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLSteelTarget::BPOnTargetHit(class AWTLCharacter* Character, float ImpulseValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLSteelTarget.BPOnTargetHit");
		
		AWTLSteelTarget_BPOnTargetHit_Params params {};
		params.Character = Character;
		params.ImpulseValue = ImpulseValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLSteelTarget.Activate
	 * 		Flags  -> ()
	 */
	void AWTLSteelTarget::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLSteelTarget.Activate");
		
		AWTLSteelTarget_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLSteelTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLSteelTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLSteelTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLStorageObjectInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLStorageObjectInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLStorageObjectInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLStuffPlacementZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLStuffPlacementZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLStuffPlacementZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLSublevelScriptActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLSublevelScriptActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLSublevelScriptActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.OnRep_CurrentCondition
	 * 		Flags  -> ()
	 */
	void AWTLTacticalGrenade::OnRep_CurrentCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.OnRep_CurrentCondition");
		
		AWTLTacticalGrenade_OnRep_CurrentCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.OnOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTacticalGrenade::OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.OnOverlapEnd");
		
		AWTLTacticalGrenade_OnOverlapEnd_Params params {};
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
	 * 		Name   -> Function WTL.WTLTacticalGrenade.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AWTLTacticalGrenade::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.OnOverlapBegin");
		
		AWTLTacticalGrenade_OnOverlapBegin_Params params {};
		params.OverlappedComp = OverlappedComp;
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
	 * 		Name   -> Function WTL.WTLTacticalGrenade.OnConditionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              inCurrentCondition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTacticalGrenade::OnConditionChanged(float inCurrentCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.OnConditionChanged");
		
		AWTLTacticalGrenade_OnConditionChanged_Params params {};
		params.inCurrentCondition = inCurrentCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.NetMulticast_StuntCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpactPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTacticalGrenade::NetMulticast_StuntCharacter(const struct FVector& ImpactPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.NetMulticast_StuntCharacter");
		
		AWTLTacticalGrenade_NetMulticast_StuntCharacter_Params params {};
		params.ImpactPosition = ImpactPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.BPSwitchMaterialColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CondionPercent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTacticalGrenade::BPSwitchMaterialColor(float CondionPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.BPSwitchMaterialColor");
		
		AWTLTacticalGrenade_BPSwitchMaterialColor_Params params {};
		params.CondionPercent = CondionPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.BPDestroyFX
	 * 		Flags  -> ()
	 */
	void AWTLTacticalGrenade::BPDestroyFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.BPDestroyFX");
		
		AWTLTacticalGrenade_BPDestroyFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.AIInterface_IsInSafeZone
	 * 		Flags  -> ()
	 */
	bool AWTLTacticalGrenade::AIInterface_IsInSafeZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.AIInterface_IsInSafeZone");
		
		AWTLTacticalGrenade_AIInterface_IsInSafeZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.AIInterface_IsCanBeAttacked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWTLFaction                                        InstigatorFaction                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AWTLTacticalGrenade::AIInterface_IsCanBeAttacked(EWTLFaction InstigatorFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.AIInterface_IsCanBeAttacked");
		
		AWTLTacticalGrenade_AIInterface_IsCanBeAttacked_Params params {};
		params.InstigatorFaction = InstigatorFaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.AIInterface_IsAlive
	 * 		Flags  -> ()
	 */
	bool AWTLTacticalGrenade::AIInterface_IsAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.AIInterface_IsAlive");
		
		AWTLTacticalGrenade_AIInterface_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.AIInterface_GetVelocity
	 * 		Flags  -> ()
	 */
	struct FVector AWTLTacticalGrenade::AIInterface_GetVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.AIInterface_GetVelocity");
		
		AWTLTacticalGrenade_AIInterface_GetVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.AIInterface_GetGroupID
	 * 		Flags  -> ()
	 */
	int32_t AWTLTacticalGrenade::AIInterface_GetGroupID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.AIInterface_GetGroupID");
		
		AWTLTacticalGrenade_AIInterface_GetGroupID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalGrenade.AIInterface_GetFaction
	 * 		Flags  -> ()
	 */
	EWTLFaction AWTLTacticalGrenade::AIInterface_GetFaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalGrenade.AIInterface_GetFaction");
		
		AWTLTacticalGrenade_AIInterface_GetFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLTacticalGrenade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLTacticalGrenade::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTacticalGrenade");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalWeapon.SetPreviewMeshVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTacticalWeapon::SetPreviewMeshVisibility(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalWeapon.SetPreviewMeshVisibility");
		
		AWTLTacticalWeapon_SetPreviewMeshVisibility_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalWeapon.Server_StopUse
	 * 		Flags  -> ()
	 */
	void AWTLTacticalWeapon::Server_StopUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalWeapon.Server_StopUse");
		
		AWTLTacticalWeapon_Server_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalWeapon.Server_StartUse
	 * 		Flags  -> ()
	 */
	void AWTLTacticalWeapon::Server_StartUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalWeapon.Server_StartUse");
		
		AWTLTacticalWeapon_Server_StartUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalWeapon.NetMulticast_OnUse
	 * 		Flags  -> ()
	 */
	void AWTLTacticalWeapon::NetMulticast_OnUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalWeapon.NetMulticast_OnUse");
		
		AWTLTacticalWeapon_NetMulticast_OnUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalWeapon.NetMulticast_OnPlace
	 * 		Flags  -> ()
	 */
	void AWTLTacticalWeapon::NetMulticast_OnPlace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalWeapon.NetMulticast_OnPlace");
		
		AWTLTacticalWeapon_NetMulticast_OnPlace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTacticalWeapon.Client_ShowPlacementMesh
	 * 		Flags  -> ()
	 */
	void AWTLTacticalWeapon::Client_ShowPlacementMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTacticalWeapon.Client_ShowPlacementMesh");
		
		AWTLTacticalWeapon_Client_ShowPlacementMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLTacticalWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLTacticalWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTacticalWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTiltComponent.OnRep_TiltState
	 * 		Flags  -> ()
	 */
	void UWTLTiltComponent::OnRep_TiltState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTiltComponent.OnRep_TiltState");
		
		UWTLTiltComponent_OnRep_TiltState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLTiltComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLTiltComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTiltComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLTradingObjectInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLTradingObjectInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTradingObjectInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTransitionLevelScriptActor.OnLevelLoaded
	 * 		Flags  -> ()
	 */
	void AWTLTransitionLevelScriptActor::OnLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTransitionLevelScriptActor.OnLevelLoaded");
		
		AWTLTransitionLevelScriptActor_OnLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLTransitionLevelScriptActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLTransitionLevelScriptActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTransitionLevelScriptActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.ShowNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        NoteName                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NoteID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::ShowNote(class AWTLCharacter* Character, const class FText& NoteName, int32_t NoteID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.ShowNote");
		
		AWTLTriggerObject_ShowNote_Params params {};
		params.Character = Character;
		params.NoteName = NoteName;
		params.NoteID = NoteID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.SetQuestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLQuestState                                     State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerCheckResult                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::SetQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState State, EWTLTriggerCheckResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.SetQuestState");
		
		AWTLTriggerObject_SetQuestState_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.OnEndUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::OnEndUse(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.OnEndUse");
		
		AWTLTriggerObject_OnEndUse_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.OnCharacterUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::OnCharacterUse(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.OnCharacterUse");
		
		AWTLTriggerObject_OnCharacterUse_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.OnCharacterCanBeUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AWTLTriggerObject::OnCharacterCanBeUsed(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.OnCharacterCanBeUsed");
		
		AWTLTriggerObject_OnCharacterCanBeUsed_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.HasQuestWithQuestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLQuestState                                     QuestState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AWTLTriggerObject::HasQuestWithQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState QuestState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.HasQuestWithQuestState");
		
		AWTLTriggerObject_HasQuestWithQuestState_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		params.QuestState = QuestState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.GetTriggerActionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EWTLTriggerObjectActionType AWTLTriggerObject::GetTriggerActionType(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.GetTriggerActionType");
		
		AWTLTriggerObject_GetTriggerActionType_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.GetQuestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLQuestState                                     QuestState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::GetQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState* QuestState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.GetQuestState");
		
		AWTLTriggerObject_GetQuestState_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestState != nullptr)
			*QuestState = params.QuestState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.CharacterTakeQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerCheckResult                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::CharacterTakeQuest(class AWTLCharacter* Character, int32_t QuestID, EWTLTriggerCheckResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.CharacterTakeQuest");
		
		AWTLTriggerObject_CharacterTakeQuest_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.CharacterCompleteQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerCheckResult                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::CharacterCompleteQuest(class AWTLCharacter* Character, int32_t QuestID, EWTLTriggerCheckResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.CharacterCompleteQuest");
		
		AWTLTriggerObject_CharacterCompleteQuest_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.CharacterCanTakeQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerCheckResult                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::CharacterCanTakeQuest(class AWTLCharacter* Character, int32_t QuestID, EWTLTriggerCheckResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.CharacterCanTakeQuest");
		
		AWTLTriggerObject_CharacterCanTakeQuest_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.CharacterCanCompleteQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerCheckResult                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::CharacterCanCompleteQuest(class AWTLCharacter* Character, int32_t QuestID, EWTLTriggerCheckResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.CharacterCanCompleteQuest");
		
		AWTLTriggerObject_CharacterCanCompleteQuest_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.CanQuestBeCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AWTLTriggerObject::CanQuestBeCompleted(class AWTLCharacter* Character, int32_t QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.CanQuestBeCompleted");
		
		AWTLTriggerObject_CanQuestBeCompleted_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerObject.BeginInformationDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InformationDialogID                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerObject::BeginInformationDialog(class AWTLCharacter* Character, int32_t InformationDialogID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerObject.BeginInformationDialog");
		
		AWTLTriggerObject_BeginInformationDialog_Params params {};
		params.Character = Character;
		params.InformationDialogID = InformationDialogID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLTriggerObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLTriggerObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTriggerObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerStateObject.OnRep_State
	 * 		Flags  -> ()
	 */
	void AWTLTriggerStateObject::OnRep_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerStateObject.OnRep_State");
		
		AWTLTriggerStateObject_OnRep_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerStateObject.OnCharacterUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerObjectState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerStateObject::OnCharacterUse(class AWTLCharacter* Character, EWTLTriggerObjectState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerStateObject.OnCharacterUse");
		
		AWTLTriggerStateObject_OnCharacterUse_Params params {};
		params.Character = Character;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLTriggerStateObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLTriggerStateObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTriggerStateObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.SwitchCharacterQuestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLQuestState                                     QuestState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::SwitchCharacterQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState* QuestState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.SwitchCharacterQuestState");
		
		AWTLTriggerVolume_SwitchCharacterQuestState_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestState != nullptr)
			*QuestState = params.QuestState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.ShowCharacterActionTimerWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLActionTimerWidgetType                          Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLCountdownSliderWidgetFillingType               Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::ShowCharacterActionTimerWidget(class AWTLCharacter* Character, float Timeout, EWTLActionTimerWidgetType Type, EWTLCountdownSliderWidgetFillingType Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.ShowCharacterActionTimerWidget");
		
		AWTLTriggerVolume_ShowCharacterActionTimerWidget_Params params {};
		params.Character = Character;
		params.Timeout = Timeout;
		params.Type = Type;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.SetCharacterQuestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLQuestState                                     QuestState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerActionResult                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::SetCharacterQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState QuestState, EWTLTriggerActionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.SetCharacterQuestState");
		
		AWTLTriggerVolume_SetCharacterQuestState_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		params.QuestState = QuestState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.OnEndOverlap");
		
		AWTLTriggerVolume_OnEndOverlap_Params params {};
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
	 * 		Name   -> Function WTL.WTLTriggerVolume.OnCharacterLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::OnCharacterLeave(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.OnCharacterLeave");
		
		AWTLTriggerVolume_OnCharacterLeave_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.OnCharacterEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::OnCharacterEnter(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.OnCharacterEnter");
		
		AWTLTriggerVolume_OnCharacterEnter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.OnBeginOverlap");
		
		AWTLTriggerVolume_OnBeginOverlap_Params params {};
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
	 * 		Name   -> Function WTL.WTLTriggerVolume.HideCharacterActionTimerWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::HideCharacterActionTimerWidget(class AWTLCharacter* Character, bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.HideCharacterActionTimerWidget");
		
		AWTLTriggerVolume_HideCharacterActionTimerWidget_Params params {};
		params.Character = Character;
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.GiveItemToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLItemType                                       ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemTypeID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerActionResult                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::GiveItemToCharacter(class AWTLCharacter* Character, EWTLItemType ItemType, int32_t ItemTypeID, int32_t Count, int32_t Condition, EWTLTriggerActionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.GiveItemToCharacter");
		
		AWTLTriggerVolume_GiveItemToCharacter_Params params {};
		params.Character = Character;
		params.ItemType = ItemType;
		params.ItemTypeID = ItemTypeID;
		params.Count = Count;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.GiveItemsToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FWTLGiveItemInfo>                    ItemsToGive                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EWTLTriggerActionResult                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLTriggerVolume::GiveItemsToCharacter(class AWTLCharacter* Character, TArray<struct FWTLGiveItemInfo> ItemsToGive, EWTLTriggerActionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.GiveItemsToCharacter");
		
		AWTLTriggerVolume_GiveItemsToCharacter_Params params {};
		params.Character = Character;
		params.ItemsToGive = ItemsToGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.GetCharactersQuestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EWTLQuestState AWTLTriggerVolume::GetCharactersQuestState(class AWTLCharacter* Character, int32_t QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.GetCharactersQuestState");
		
		AWTLTriggerVolume_GetCharactersQuestState_Params params {};
		params.Character = Character;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.GetCharactersCount
	 * 		Flags  -> ()
	 */
	int32_t AWTLTriggerVolume::GetCharactersCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.GetCharactersCount");
		
		AWTLTriggerVolume_GetCharactersCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.CheckCharacterHaveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWTLItemType                                       ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemTypeID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CheckContainers                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AWTLTriggerVolume::CheckCharacterHaveItem(class AWTLCharacter* Character, EWTLItemType ItemType, int32_t ItemTypeID, int32_t Count, bool CheckContainers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.CheckCharacterHaveItem");
		
		AWTLTriggerVolume_CheckCharacterHaveItem_Params params {};
		params.Character = Character;
		params.ItemType = ItemType;
		params.ItemTypeID = ItemTypeID;
		params.Count = Count;
		params.CheckContainers = CheckContainers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTriggerVolume.CharacterInVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AWTLTriggerVolume::CharacterInVolume(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTriggerVolume.CharacterInVolume");
		
		AWTLTriggerVolume_CharacterInVolume_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLTriggerVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLTriggerVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTriggerVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLTurretAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLTurretAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTurretAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTutorialVolume.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AWTLTutorialVolume::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTutorialVolume.OnBeginOverlap");
		
		AWTLTutorialVolume_OnBeginOverlap_Params params {};
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
	 * 		Name   -> PredefinedFunction AWTLTutorialVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLTutorialVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTutorialVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvironmentDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvironmentDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.EnvironmentDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAcidDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAcidDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.AcidDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.FireDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadiationDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadiationDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.RadiationDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WeaponDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExplosiveWeaponDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosiveWeaponDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.ExplosiveWeaponDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMedicineDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMedicineDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.MedicineDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMonsterDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMonsterDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.MonsterDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USuffocationDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USuffocationDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.SuffocationDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlledMonsterSpawnDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlledMonsterSpawnDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.ControlledMonsterSpawnDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurveLipSync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurveLipSync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.CurveLipSync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUndergroundVolume.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLUndergroundVolume::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUndergroundVolume.OnEndOverlap");
		
		AWTLUndergroundVolume_OnEndOverlap_Params params {};
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
	 * 		Name   -> Function WTL.WTLUndergroundVolume.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AWTLUndergroundVolume::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUndergroundVolume.OnBeginOverlap");
		
		AWTLUndergroundVolume_OnBeginOverlap_Params params {};
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
	 * 		Name   -> PredefinedFunction AWTLUndergroundVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLUndergroundVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLUndergroundVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUtilityColorPicker.OnValueSliderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTLUtilityColorPicker::OnValueSliderChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUtilityColorPicker.OnValueSliderChanged");
		
		UWTLUtilityColorPicker_OnValueSliderChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUtilityColorPicker.OnSaturationSliderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Saturation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTLUtilityColorPicker::OnSaturationSliderChanged(float Saturation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUtilityColorPicker.OnSaturationSliderChanged");
		
		UWTLUtilityColorPicker_OnSaturationSliderChanged_Params params {};
		params.Saturation = Saturation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUtilityColorPicker.OnHueSliderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Hue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTLUtilityColorPicker::OnHueSliderChanged(float Hue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUtilityColorPicker.OnHueSliderChanged");
		
		UWTLUtilityColorPicker_OnHueSliderChanged_Params params {};
		params.Hue = Hue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUtilityColorPicker.OnHexCommitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTLUtilityColorPicker::OnHexCommitted(const class FText& Text, ETextCommit CommitType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUtilityColorPicker.OnHexCommitted");
		
		UWTLUtilityColorPicker_OnHexCommitted_Params params {};
		params.Text = Text;
		params.CommitType = CommitType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUtilityColorPicker.OnHexChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWTLUtilityColorPicker::OnHexChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUtilityColorPicker.OnHexChanged");
		
		UWTLUtilityColorPicker_OnHexChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUtilityColorPicker.OnAlphaSliderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTLUtilityColorPicker::OnAlphaSliderChanged(float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUtilityColorPicker.OnAlphaSliderChanged");
		
		UWTLUtilityColorPicker_OnAlphaSliderChanged_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLUtilityColorPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLUtilityColorPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLUtilityColorPicker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUtilityNumberTextBox.OnNumberTextCommitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NumberText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTLUtilityNumberTextBox::OnNumberTextCommitted(const class FText& NumberText, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUtilityNumberTextBox.OnNumberTextCommitted");
		
		UWTLUtilityNumberTextBox_OnNumberTextCommitted_Params params {};
		params.NumberText = NumberText;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLUtilityNumberTextBox.OnNumberTextChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NumberText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWTLUtilityNumberTextBox::OnNumberTextChanged(const class FText& NumberText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLUtilityNumberTextBox.OnNumberTextChanged");
		
		UWTLUtilityNumberTextBox_OnNumberTextChanged_Params params {};
		params.NumberText = NumberText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLUtilityNumberTextBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLUtilityNumberTextBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLUtilityNumberTextBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.MasterServerBlueprintLibrary.UpdateAccountStatistics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ParameterID                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Delta                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterServerBlueprintLibrary::UpdateAccountStatistics(class AWTLCharacter* Character, int32_t ParameterID, int32_t Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.MasterServerBlueprintLibrary.UpdateAccountStatistics");
		
		UMasterServerBlueprintLibrary_UpdateAccountStatistics_Params params {};
		params.Character = Character;
		params.ParameterID = ParameterID;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.MasterServerBlueprintLibrary.TriggerAccountAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AchievementID                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterServerBlueprintLibrary::TriggerAccountAchievement(class AWTLCharacter* Character, int32_t AchievementID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.MasterServerBlueprintLibrary.TriggerAccountAchievement");
		
		UMasterServerBlueprintLibrary_TriggerAccountAchievement_Params params {};
		params.Character = Character;
		params.AchievementID = AchievementID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMasterServerBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMasterServerBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.MasterServerBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLTestingBlueprintLibrary.ProcessSteamInventoryItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTLTestingBlueprintLibrary::ProcessSteamInventoryItem(class AWTLCharacter* Character, const class FString& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLTestingBlueprintLibrary.ProcessSteamInventoryItem");
		
		UWTLTestingBlueprintLibrary_ProcessSteamInventoryItem_Params params {};
		params.Character = Character;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLTestingBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLTestingBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLTestingBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLVehicleCharacterAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLVehicleCharacterAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLVehicleCharacterAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.UpdateObstruction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpactPoint                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::UpdateObstruction(const struct FVector& ImpactPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.UpdateObstruction");
		
		AWTLVehiclePawn_UpdateObstruction_Params params {};
		params.ImpactPoint = ImpactPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.SetVehicleMeshVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::SetVehicleMeshVisibility(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.SetVehicleMeshVisibility");
		
		AWTLVehiclePawn_SetVehicleMeshVisibility_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.SetIsInAnomaly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::SetIsInAnomaly(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.SetIsInAnomaly");
		
		AWTLVehiclePawn_SetIsInAnomaly_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_VehicleEnteredInWater
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_VehicleEnteredInWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_VehicleEnteredInWater");
		
		AWTLVehiclePawn_Server_VehicleEnteredInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_UseHorn
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_UseHorn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_UseHorn");
		
		AWTLVehiclePawn_Server_UseHorn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_UpdateObstruction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpactPoint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::Server_UpdateObstruction(const struct FVector& ImpactPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_UpdateObstruction");
		
		AWTLVehiclePawn_Server_UpdateObstruction_Params params {};
		params.ImpactPoint = ImpactPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_ToggleRadio
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_ToggleRadio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_ToggleRadio");
		
		AWTLVehiclePawn_Server_ToggleRadio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_ToggleHeadlight
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_ToggleHeadlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_ToggleHeadlight");
		
		AWTLVehiclePawn_Server_ToggleHeadlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_SetMoveRightPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::Server_SetMoveRightPressed(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_SetMoveRightPressed");
		
		AWTLVehiclePawn_Server_SetMoveRightPressed_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_SetEngineBraking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::Server_SetEngineBraking(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_SetEngineBraking");
		
		AWTLVehiclePawn_Server_SetEngineBraking_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_RequestEject
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_RequestEject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_RequestEject");
		
		AWTLVehiclePawn_Server_RequestEject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_PlayStun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::Server_PlayStun(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_PlayStun");
		
		AWTLVehiclePawn_Server_PlayStun_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_LeaveVehicle
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_LeaveVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_LeaveVehicle");
		
		AWTLVehiclePawn_Server_LeaveVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_Kick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              KickVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::Server_Kick(float KickVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_Kick");
		
		AWTLVehiclePawn_Server_Kick_Params params {};
		params.KickVelocity = KickVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_EjectCharacterFromVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWTLCharacterStunhitDirection                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::Server_EjectCharacterFromVehicle(EWTLCharacterStunhitDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_EjectCharacterFromVehicle");
		
		AWTLVehiclePawn_Server_EjectCharacterFromVehicle_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_CharacterIsUnderground
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_CharacterIsUnderground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_CharacterIsUnderground");
		
		AWTLVehiclePawn_Server_CharacterIsUnderground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_BrakeReleased
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_BrakeReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_BrakeReleased");
		
		AWTLVehiclePawn_Server_BrakeReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Server_BrakePressed
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Server_BrakePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Server_BrakePressed");
		
		AWTLVehiclePawn_Server_BrakePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.PlayVehicleAnimMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::PlayVehicleAnimMontage(class UAnimMontage* Montage, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.PlayVehicleAnimMontage");
		
		AWTLVehiclePawn_PlayVehicleAnimMontage_Params params {};
		params.Montage = Montage;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.PlayHightGravityVehicleMontage
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::PlayHightGravityVehicleMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.PlayHightGravityVehicleMontage");
		
		AWTLVehiclePawn_PlayHightGravityVehicleMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_VehicleMeshVisibility
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_VehicleMeshVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_VehicleMeshVisibility");
		
		AWTLVehiclePawn_OnRep_VehicleMeshVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_UseRadio
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_UseRadio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_UseRadio");
		
		AWTLVehiclePawn_OnRep_UseRadio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_UseHeadlight
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_UseHeadlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_UseHeadlight");
		
		AWTLVehiclePawn_OnRep_UseHeadlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_PlayHightGravityMontage
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_PlayHightGravityMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_PlayHightGravityMontage");
		
		AWTLVehiclePawn_OnRep_PlayHightGravityMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_LeaveVehicle
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_LeaveVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_LeaveVehicle");
		
		AWTLVehiclePawn_OnRep_LeaveVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_ItemInventoryID
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_ItemInventoryID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_ItemInventoryID");
		
		AWTLVehiclePawn_OnRep_ItemInventoryID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_IsInAmomaly
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_IsInAmomaly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_IsInAmomaly");
		
		AWTLVehiclePawn_OnRep_IsInAmomaly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_EngineBraking
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_EngineBraking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_EngineBraking");
		
		AWTLVehiclePawn_OnRep_EngineBraking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_EjectCharacter
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_EjectCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_EjectCharacter");
		
		AWTLVehiclePawn_OnRep_EjectCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.OnRep_BrakePressed
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::OnRep_BrakePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.OnRep_BrakePressed");
		
		AWTLVehiclePawn_OnRep_BrakePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.NetMulticast_UseHorn
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::NetMulticast_UseHorn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.NetMulticast_UseHorn");
		
		AWTLVehiclePawn_NetMulticast_UseHorn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.NetMulticast_PlayVehicleAnimMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montag                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::NetMulticast_PlayVehicleAnimMontage(class UAnimMontage* Montag, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.NetMulticast_PlayVehicleAnimMontage");
		
		AWTLVehiclePawn_NetMulticast_PlayVehicleAnimMontage_Params params {};
		params.Montag = Montag;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.NetMulticast_PlayUnlandingMontage
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::NetMulticast_PlayUnlandingMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.NetMulticast_PlayUnlandingMontage");
		
		AWTLVehiclePawn_NetMulticast_PlayUnlandingMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.NetMulticast_PlayLandingMontage
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::NetMulticast_PlayLandingMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.NetMulticast_PlayLandingMontage");
		
		AWTLVehiclePawn_NetMulticast_PlayLandingMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.NetMulticast_EjectCharacter
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::NetMulticast_EjectCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.NetMulticast_EjectCharacter");
		
		AWTLVehiclePawn_NetMulticast_EjectCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.K2_VehicleCustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TriggerName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::K2_VehicleCustomEvent(const class FName& TriggerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.K2_VehicleCustomEvent");
		
		AWTLVehiclePawn_K2_VehicleCustomEvent_Params params {};
		params.TriggerName = TriggerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.K2_UpdateHeadLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::K2_UpdateHeadLight(float Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.K2_UpdateHeadLight");
		
		AWTLVehiclePawn_K2_UpdateHeadLight_Params params {};
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.K2_SetStoplight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::K2_SetStoplight(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.K2_SetStoplight");
		
		AWTLVehiclePawn_K2_SetStoplight_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.K2_SetRadio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::K2_SetRadio(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.K2_SetRadio");
		
		AWTLVehiclePawn_K2_SetRadio_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.K2_SetHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::K2_SetHighlight(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.K2_SetHighlight");
		
		AWTLVehiclePawn_K2_SetHighlight_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.K2_SetHeadlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::K2_SetHeadlight(bool State, unsigned char Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.K2_SetHeadlight");
		
		AWTLVehiclePawn_K2_SetHeadlight_Params params {};
		params.State = State;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.K2_ConditionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewCondition                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::K2_ConditionChanged(float NewCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.K2_ConditionChanged");
		
		AWTLVehiclePawn_K2_ConditionChanged_Params params {};
		params.NewCondition = NewCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.IsCharacterUnderground
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::IsCharacterUnderground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.IsCharacterUnderground");
		
		AWTLVehiclePawn_IsCharacterUnderground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetVehicleState
	 * 		Flags  -> ()
	 */
	EWTLVehicleState AWTLVehiclePawn::GetVehicleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetVehicleState");
		
		AWTLVehiclePawn_GetVehicleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetVehicleMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AWTLVehiclePawn::GetVehicleMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetVehicleMesh");
		
		AWTLVehiclePawn_GetVehicleMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetVehicleHighGravityMontage
	 * 		Flags  -> ()
	 */
	class UAnimMontage* AWTLVehiclePawn::GetVehicleHighGravityMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetVehicleHighGravityMontage");
		
		AWTLVehiclePawn_GetVehicleHighGravityMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetSpeed
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetSpeed");
		
		AWTLVehiclePawn_GetSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetRearWheelRotationAngle
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetRearWheelRotationAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetRearWheelRotationAngle");
		
		AWTLVehiclePawn_GetRearWheelRotationAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetNormalizedSpeedSigned
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetNormalizedSpeedSigned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetNormalizedSpeedSigned");
		
		AWTLVehiclePawn_GetNormalizedSpeedSigned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetNormalizedSpeed
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetNormalizedSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetNormalizedSpeed");
		
		AWTLVehiclePawn_GetNormalizedSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetMaxSpeed
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetMaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetMaxSpeed");
		
		AWTLVehiclePawn_GetMaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetIsInAnomaly
	 * 		Flags  -> ()
	 */
	bool AWTLVehiclePawn::GetIsInAnomaly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetIsInAnomaly");
		
		AWTLVehiclePawn_GetIsInAnomaly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetFrontWheelRotationAngle
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetFrontWheelRotationAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetFrontWheelRotationAngle");
		
		AWTLVehiclePawn_GetFrontWheelRotationAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetForwardWheelAngle
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetForwardWheelAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetForwardWheelAngle");
		
		AWTLVehiclePawn_GetForwardWheelAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCurrentSpeedSigned
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetCurrentSpeedSigned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCurrentSpeedSigned");
		
		AWTLVehiclePawn_GetCurrentSpeedSigned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCurrentSpeed
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetCurrentSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCurrentSpeed");
		
		AWTLVehiclePawn_GetCurrentSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCurrentRootBoneOffset
	 * 		Flags  -> ()
	 */
	struct FVector AWTLVehiclePawn::GetCurrentRootBoneOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCurrentRootBoneOffset");
		
		AWTLVehiclePawn_GetCurrentRootBoneOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCurrentRollValue
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetCurrentRollValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCurrentRollValue");
		
		AWTLVehiclePawn_GetCurrentRollValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCurrentForwardInputValue
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetCurrentForwardInputValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCurrentForwardInputValue");
		
		AWTLVehiclePawn_GetCurrentForwardInputValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCurrentForwardAbsorberOffset
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetCurrentForwardAbsorberOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCurrentForwardAbsorberOffset");
		
		AWTLVehiclePawn_GetCurrentForwardAbsorberOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCurrentBackwardAbsorberOffset
	 * 		Flags  -> ()
	 */
	float AWTLVehiclePawn::GetCurrentBackwardAbsorberOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCurrentBackwardAbsorberOffset");
		
		AWTLVehiclePawn_GetCurrentBackwardAbsorberOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCharacterStateInVehicle
	 * 		Flags  -> ()
	 */
	EWTLCharacterStateInVehicle AWTLVehiclePawn::GetCharacterStateInVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCharacterStateInVehicle");
		
		AWTLVehiclePawn_GetCharacterStateInVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.GetCharacterIsStunned
	 * 		Flags  -> ()
	 */
	bool AWTLVehiclePawn::GetCharacterIsStunned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.GetCharacterIsStunned");
		
		AWTLVehiclePawn_GetCharacterIsStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.EnterInVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWTLCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::EnterInVehicle(class AWTLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.EnterInVehicle");
		
		AWTLVehiclePawn_EnterInVehicle_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Client_ResetCamera
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Client_ResetCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Client_ResetCamera");
		
		AWTLVehiclePawn_Client_ResetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Client_OnUpdateInVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInVehicle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVehiclePawn::Client_OnUpdateInVehicle(bool IsInVehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Client_OnUpdateInVehicle");
		
		AWTLVehiclePawn_Client_OnUpdateInVehicle_Params params {};
		params.IsInVehicle = IsInVehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVehiclePawn.Client_OnPossessed
	 * 		Flags  -> ()
	 */
	void AWTLVehiclePawn::Client_OnPossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVehiclePawn.Client_OnPossessed");
		
		AWTLVehiclePawn_Client_OnPossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLVehiclePawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLVehiclePawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLVehiclePawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLVKSocialNetworkAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLVKSocialNetworkAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLVKSocialNetworkAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLVoiceController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLVoiceController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLVoiceController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLVolumePortal.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWTLVolumePortal::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVolumePortal.OnEndOverlap");
		
		AWTLVolumePortal_OnEndOverlap_Params params {};
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
	 * 		Name   -> Function WTL.WTLVolumePortal.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AWTLVolumePortal::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLVolumePortal.OnBeginOverlap");
		
		AWTLVolumePortal_OnBeginOverlap_Params params {};
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
	 * 		Name   -> PredefinedFunction AWTLVolumePortal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLVolumePortal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLVolumePortal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLWaterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLWaterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLWaterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLWeaponAnimInstance.GetCharacter
	 * 		Flags  -> ()
	 */
	class AWTLCharacter* UWTLWeaponAnimInstance::GetCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLWeaponAnimInstance.GetCharacter");
		
		UWTLWeaponAnimInstance_GetCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLWeaponAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLWeaponAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLWeaponAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WTL.WTLWeaponAttachment.Client_SetMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTLWeaponAttachment::Client_SetMesh(class UStaticMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WTL.WTLWeaponAttachment.Client_SetMesh");
		
		UWTLWeaponAttachment_Client_SetMesh_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWTLWeaponAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTLWeaponAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLWeaponAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLWindTurbine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLWindTurbine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLWindTurbine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWTLWorldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWTLWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WTL.WTLWorldSettings");
		return ptr;
	}

}


