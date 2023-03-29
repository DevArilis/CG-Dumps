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
	 * AnimBlueprintGeneratedClass AB_Seagull_Enviroment.AB_Seagull_Enviroment_C
	 * Size -> 0x05A8 (FullSize[0x0860] - InheritedSize[0x02B8])
	 */
	class UAB_Seagull_Enviroment_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_IQOK[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0370(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0398(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x03B8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x03D8(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x04E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0560(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0590(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0610(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0640(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x06C0(0x0030)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x06F0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0768(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0798(0x00B0)
		bool                                                       bToDown;                                                 // 0x0848(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bToUp;                                                   // 0x0849(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bChangeFlyingAnim;                                       // 0x084A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CJY5[0x1];                                   // 0x084B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timer;                                                   // 0x084C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NextTimeToChangeAnim;                                    // 0x0850(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ToUpRotation;                                            // 0x0854(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Seagull_Enviroment_AnimGraphNode_TransitionResult_1A79400D477F7F5919B5A1B645D2AEDA();
		void ExecuteUbergraph_AB_Seagull_Enviroment(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
