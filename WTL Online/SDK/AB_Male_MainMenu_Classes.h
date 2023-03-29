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
	 * AnimBlueprintGeneratedClass AB_Male_MainMenu.AB_Male_MainMenu_C
	 * Size -> 0x18C4 (FullSize[0x1BC4] - InheritedSize[0x0300])
	 */
	class UAB_Male_MainMenu_C : public UWTLNPCAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0030)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0338(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0358(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0418(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x0498(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0560(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x05E0(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x0660(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0728(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x07A8(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0828(0x00C8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x08F0(0x0108)
		unsigned char                                              UnknownData_TLZK[0x8];                                   // 0x09F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x0A00(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x0BE0(0x01E0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x0DC0(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0EB0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x0ED0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x0FD8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x10E0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x11E8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x12F0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x13F8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x1500(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x1608(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x1710(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x1818(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x1920(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1A28(0x0108)
		bool                                                       IK_Aktiv;                                                // 0x1B30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J9L7[0x3];                                   // 0x1B31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Turn;                                                    // 0x1B34(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PoseDriver;                                              // 0x1B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Alpha;                                                   // 0x1B3C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7KU8[0x3];                                   // 0x1B3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FScaleRibCage;                                           // 0x1B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FScaleNeck;                                              // 0x1B44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FScaleHead;                                              // 0x1B48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FScaleHands;                                             // 0x1B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FScaleFeet;                                              // 0x1B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Complexion;                                              // 0x1B54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleRibCageVector;                                      // 0x1B58(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InvertScaleRibCageVector;                                // 0x1B64(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleNeckVector;                                         // 0x1B70(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleHeadVector;                                         // 0x1B7C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleHandsVector;                                        // 0x1B88(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InvertScaleHandsVector;                                  // 0x1B94(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleFeetVector;                                         // 0x1BA0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InvertScaleFeetVector;                                   // 0x1BAC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BackpackTranslation;                                     // 0x1BB8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_Male_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
