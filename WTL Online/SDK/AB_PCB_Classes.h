#pragma once

/**
 * Name: WTL
 * Version: 4.26.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass AB_PCB.AB_PCB_C
	 * Size -> 0x09F0 (FullSize[0x0CA8] - InheritedSize[0x02B8])
	 */
	class UAB_PCB_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_R443[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x02F8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0400(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x0420(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x0528(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x0630(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x0738(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0840(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0948(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0A50(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0B58(0x0108)
		bool                                                       sw0;                                                     // 0x0C60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sw1;                                                     // 0x0C61(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sw2;                                                     // 0x0C62(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sw3;                                                     // 0x0C63(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sw4;                                                     // 0x0C64(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sw5;                                                     // 0x0C65(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sw6;                                                     // 0x0C66(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sw7;                                                     // 0x0C67(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SwitchOffsetValue;                                       // 0x0C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QUD8[0x4];                                   // 0x0C6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              MyMesh;                                                  // 0x0C70(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTestPressed;                                           // 0x0C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LWFR[0x3];                                   // 0x0C79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TestButtonTranlation;                                    // 0x0C7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_CoreHacking_Preview_C*                           MyActor;                                                 // 0x0C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Offset0;                                                 // 0x0C88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Offset1;                                                 // 0x0C8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Offset2;                                                 // 0x0C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Offset3;                                                 // 0x0C94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Offset4;                                                 // 0x0C98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Offset5;                                                 // 0x0C9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Offset6;                                                 // 0x0CA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Offset7;                                                 // 0x0CA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_2A63E5CF4A23A6876FA0CA98D439A668();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E589ABC2479AF655901996AEBC92F2CC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_EA353CA84A879AAD12C77D8935D81B3A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E183A9EE48D01C2C26682D85165E7A59();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E7EC8D6D4C042A57DE133C93D1DFA5F3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_E3833360426710B37A7AED904AC6217C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_DD609A8F470927D1A0323BBC3F70FABD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_78A7C9894F9B09EB549EF1859C5A1AD0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PCB_AnimGraphNode_ModifyBone_861EA0234BF7F5B6671EE1B744DAD764();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void SetSwitcherValue(int32_t Index, bool Value);
		void TestButtonPressed();
		void ExecuteUbergraph_AB_PCB(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
