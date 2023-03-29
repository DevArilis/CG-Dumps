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
	 * 		Name   -> Function AB_CharacterPreview.AB_CharacterPreview_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_CharacterPreview_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharacterPreview.AB_CharacterPreview_C.AnimGraph");
		
		UAB_CharacterPreview_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharacterPreview.AB_CharacterPreview_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8
	 * 		Flags  -> ()
	 */
	void UAB_CharacterPreview_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharacterPreview.AB_CharacterPreview_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8");
		
		UAB_CharacterPreview_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharacterPreview.AB_CharacterPreview_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12
	 * 		Flags  -> ()
	 */
	void UAB_CharacterPreview_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharacterPreview.AB_CharacterPreview_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12");
		
		UAB_CharacterPreview_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharacterPreview.AB_CharacterPreview_C.UpdateComplexity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      BodyType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_CharacterPreview_C::UpdateComplexity(unsigned char BodyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharacterPreview.AB_CharacterPreview_C.UpdateComplexity");
		
		UAB_CharacterPreview_C_UpdateComplexity_Params params {};
		params.BodyType = BodyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharacterPreview.AB_CharacterPreview_C.ExecuteUbergraph_AB_CharacterPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_CharacterPreview_C::ExecuteUbergraph_AB_CharacterPreview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharacterPreview.AB_CharacterPreview_C.ExecuteUbergraph_AB_CharacterPreview");
		
		UAB_CharacterPreview_C_ExecuteUbergraph_AB_CharacterPreview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_CharacterPreview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_CharacterPreview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_CharacterPreview.AB_CharacterPreview_C");
		return ptr;
	}

}


