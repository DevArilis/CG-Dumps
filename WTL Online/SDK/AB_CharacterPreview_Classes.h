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
	 * AnimBlueprintGeneratedClass AB_CharacterPreview.AB_CharacterPreview_C
	 * Size -> 0x1B74 (FullSize[0x1EC4] - InheritedSize[0x0350])
	 */
	class UAB_CharacterPreview_C : public UWTLCharacterPreviewAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0358(0x00C0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0418(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x0438(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x0528(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x0618(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0708(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0788(0x00E8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0870(0x0020)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x0890(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x0A70(0x01E0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0C50(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0C80(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0D68(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0E08(0x0080)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive;                    // 0x0E88(0x00D0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x0F58(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x1048(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x1150(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x1258(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x1360(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x1468(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x1570(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x1678(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x1780(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x1888(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x1990(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x1A98(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x1BA0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x1CA8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1DB0(0x0108)
		struct FVector                                             BackpackTranslation;                                     // 0x1EB8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12();
		void UpdateComplexity(unsigned char BodyType);
		void ExecuteUbergraph_AB_CharacterPreview(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
