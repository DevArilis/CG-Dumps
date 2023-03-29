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
	 * 		Name   -> Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Seagull_Enviroment_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.AnimGraph");
		
		UAB_Seagull_Enviroment_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Seagull_Enviroment_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.BlueprintUpdateAnimation");
		
		UAB_Seagull_Enviroment_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA
	 * 		Flags  -> ()
	 */
	void UAB_Seagull_Enviroment_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA");
		
		UAB_Seagull_Enviroment_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.ExecuteUbergraph_AB_Seagull_Enviroment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Seagull_Enviroment_C::ExecuteUbergraph_AB_Seagull_Enviroment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Seagull_Enviroment.AB_Seagull_Enviroment_C.ExecuteUbergraph_AB_Seagull_Enviroment");
		
		UAB_Seagull_Enviroment_C_ExecuteUbergraph_AB_Seagull_Enviroment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Seagull_Enviroment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Seagull_Enviroment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Seagull_Enviroment.AB_Seagull_Enviroment_C");
		return ptr;
	}

}


