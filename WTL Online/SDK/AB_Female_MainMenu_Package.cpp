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
	 * 		Name   -> Function AB_Female_MainMenu.AB_Female_MainMenu_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Female_MainMenu_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Female_MainMenu.AB_Female_MainMenu_C.AnimGraph");
		
		UAB_Female_MainMenu_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Female_MainMenu.AB_Female_MainMenu_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Female_MainMenu_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Female_MainMenu.AB_Female_MainMenu_C.BlueprintUpdateAnimation");
		
		UAB_Female_MainMenu_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Female_MainMenu.AB_Female_MainMenu_C.ExecuteUbergraph_AB_Female_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Female_MainMenu_C::ExecuteUbergraph_AB_Female_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Female_MainMenu.AB_Female_MainMenu_C.ExecuteUbergraph_AB_Female_MainMenu");
		
		UAB_Female_MainMenu_C_ExecuteUbergraph_AB_Female_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Female_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Female_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Female_MainMenu.AB_Female_MainMenu_C");
		return ptr;
	}

}


