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
	 * 		Name   -> Function MainMenu.MainMenu_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveTick");
		
		AMainMenu_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToOriginalPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToOriginalPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToOriginalPoint");
		
		AMainMenu_C_MoveCameraToOriginalPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToCharacterTorsoPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToCharacterTorsoPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToCharacterTorsoPoint");
		
		AMainMenu_C_MoveCameraToCharacterTorsoPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToCharacterPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToCharacterPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToCharacterPoint");
		
		AMainMenu_C_MoveCameraToCharacterPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToCharacterHeadPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToCharacterHeadPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToCharacterHeadPoint");
		
		AMainMenu_C_MoveCameraToCharacterHeadPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToCharacterLegsPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToCharacterLegsPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToCharacterLegsPoint");
		
		AMainMenu_C_MoveCameraToCharacterLegsPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToCharacterFeetPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToCharacterFeetPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToCharacterFeetPoint");
		
		AMainMenu_C_MoveCameraToCharacterFeetPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToCharacterWatchesPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToCharacterWatchesPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToCharacterWatchesPoint");
		
		AMainMenu_C_MoveCameraToCharacterWatchesPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToCharacterBackpackPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToCharacterBackpackPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToCharacterBackpackPoint");
		
		AMainMenu_C_MoveCameraToCharacterBackpackPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MoveCameraToCharacterCommonPoint
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MoveCameraToCharacterCommonPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MoveCameraToCharacterCommonPoint");
		
		AMainMenu_C_MoveCameraToCharacterCommonPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveBeginPlay");
		
		AMainMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_C::ExecuteUbergraph_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");
		
		AMainMenu_C_ExecuteUbergraph_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}

}


