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
	 * AnimBlueprintGeneratedClass AB_Female_MainMenu.AB_Female_MainMenu_C
	 * Size -> 0x12CC (FullSize[0x15CC] - InheritedSize[0x0300])
	 */
	class UAB_Female_MainMenu_C : public UWTLNPCAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x0308(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x03D0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0450(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x04D0(0x00C8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0598(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0660(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x06E0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x07E8(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0808(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0828(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0858(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x08D8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x09E0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x0AE8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x0BF0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x0CF8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x0E00(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x0F08(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x1010(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x1118(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x1220(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x1328(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1430(0x0108)
		bool                                                       IK_Aktiv;                                                // 0x1538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_710Q[0x3];                                   // 0x1539(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Turn;                                                    // 0x153C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PoseDriver;                                              // 0x1540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Alpha;                                                   // 0x1544(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QJNW[0x3];                                   // 0x1545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FScaleRibCage;                                           // 0x1548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FScaleNeck;                                              // 0x154C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FScaleHead;                                              // 0x1550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FScaleHands;                                             // 0x1554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FScaleFeet;                                              // 0x1558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Complexion;                                              // 0x155C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleRibCageVector;                                      // 0x1560(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InvertScaleRibCageVector;                                // 0x156C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BackpackTranslation;                                     // 0x1578(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleNeckVector;                                         // 0x1584(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleHeadVector;                                         // 0x1590(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleHandsVector;                                        // 0x159C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InvertScaleHandsVector;                                  // 0x15A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ScaleFeetVector;                                         // 0x15B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InvertScaleFeetVector;                                   // 0x15C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_Female_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
