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
	 * AnimBlueprintGeneratedClass AB_Male_TPC_Anim.AB_Male_TPC_Anim_C
	 * Size -> 0x11080 (FullSize[0x12020] - InheritedSize[0x0FA0])
	 */
	class UAB_Male_TPC_Anim_C : public UWTLCharacterBodyAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8;                             // 0x0FA8(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_14;                                   // 0x1070(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_13;                                   // 0x10B8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0x1100(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x11A0(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_12;                                   // 0x1220(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_10;               // 0x1268(0x0190)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0x13F8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x1498(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_7;                           // 0x1518(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_57;                          // 0x15E0(0x0028)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_8;                  // 0x1608(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x16D8(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_56;                          // 0x1758(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_55;                          // 0x1780(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6;                           // 0x17A8(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_54;                          // 0x1870(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_53;                          // 0x1898(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_52;                          // 0x18C0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_51;                          // 0x18E8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x1910(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_15;                  // 0x1990(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_19;                       // 0x19B0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_18;                       // 0x1A98(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_17;                       // 0x1B80(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_16;                       // 0x1C68(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_23;                       // 0x1D50(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x1E10(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_15;                       // 0x1E90(0x00E8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_11;                                   // 0x1F78(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_14;                       // 0x1FC0(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_22;                       // 0x20A8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x2168(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_10;                                   // 0x21E8(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_13;                       // 0x2230(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_12;                       // 0x2318(0x00E8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_23;                         // 0x2400(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_22;                         // 0x2558(0x0158)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x26B0(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_15;                  // 0x2760(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x2780(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0x2800(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_80;                             // 0x28A0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_79;                             // 0x29A8(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x2AB0(0x00F0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x2BA0(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x2C50(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x2D00(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_21;                         // 0x2DB0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_50;                          // 0x2F08(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x2F30(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x2FF8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x3078(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x30F8(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_11;                       // 0x31C0(0x00E8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9;                                    // 0x32A8(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_78;                             // 0x32F0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_77;                             // 0x33F8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_76;                             // 0x3500(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_75;                             // 0x3608(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_74;                             // 0x3710(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_73;                             // 0x3818(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0x3920(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_72;                             // 0x39C0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_71;                             // 0x3AC8(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_20;                         // 0x3BD0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_49;                          // 0x3D28(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_48;                          // 0x3D50(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_10;                       // 0x3D78(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x3E60(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_70;                             // 0x3F00(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_14;                  // 0x4008(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_14;                  // 0x4028(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_13;                  // 0x4048(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x4068(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9;                        // 0x40E8(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_21;                       // 0x41D0(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_69;                             // 0x4290(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_68;                             // 0x4398(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_67;                             // 0x44A0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_66;                             // 0x45A8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_65;                             // 0x46B0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_64;                             // 0x47B8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_63;                             // 0x48C0(0x0108)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_9;                // 0x49C8(0x0190)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_20;                       // 0x4B58(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x4C18(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x4C98(0x00E8)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_7;                  // 0x4D80(0x00D0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x4E50(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_47;                          // 0x4EF0(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_62;                             // 0x4F18(0x0108)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x5020(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x5068(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_19;                       // 0x50B0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_46;                          // 0x5170(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_8;                // 0x5198(0x0190)
		struct FAnimNode_RotationMultiplier                        AnimGraphNode_RotationMultiplier_4;                      // 0x5328(0x00F0)
		struct FAnimNode_RotationMultiplier                        AnimGraphNode_RotationMultiplier_3;                      // 0x5418(0x00F0)
		struct FAnimNode_RotationMultiplier                        AnimGraphNode_RotationMultiplier_2;                      // 0x5508(0x00F0)
		struct FAnimNode_RotationMultiplier                        AnimGraphNode_RotationMultiplier;                        // 0x55F8(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_61;                             // 0x56E8(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_18;                       // 0x57F0(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_17;                       // 0x58B0(0x00C0)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x5970(0x0190)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_60;                             // 0x5B00(0x0108)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_7;                             // 0x5C08(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_45;                          // 0x5CD0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_19;                         // 0x5CF8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_44;                          // 0x5E50(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6;                             // 0x5E78(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_43;                          // 0x5F40(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_59;                             // 0x5F68(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_16;                       // 0x6070(0x00C0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_7;                // 0x6130(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_6;                // 0x62C0(0x0190)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_6;                  // 0x6450(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_42;                          // 0x6520(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x6548(0x0080)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_5;                  // 0x65C8(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_41;                          // 0x6698(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x66C0(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_40;                          // 0x6740(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_5;                // 0x6768(0x0190)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x68F8(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_4;                // 0x6940(0x0190)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_15;                       // 0x6AD0(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_18;                         // 0x6B90(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_39;                          // 0x6CE8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_38;                          // 0x6D10(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_14;                       // 0x6D38(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x6DF8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_17;                         // 0x6E40(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_37;                          // 0x6F98(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_36;                          // 0x6FC0(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_58;                             // 0x6FE8(0x0108)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x70F0(0x0190)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_57;                             // 0x7280(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x7388(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x7408(0x00E8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_56;                             // 0x74F0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_55;                             // 0x75F8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_54;                             // 0x7700(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_53;                             // 0x7808(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_52;                             // 0x7910(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_51;                             // 0x7A18(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_13;                       // 0x7B20(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_16;                         // 0x7BE0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_35;                          // 0x7D38(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_34;                          // 0x7D60(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_50;                             // 0x7D88(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_49;                             // 0x7E90(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_48;                             // 0x7F98(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_47;                             // 0x80A0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_12;                  // 0x81A8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_13;                  // 0x81C8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_46;                             // 0x81E8(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_11;                  // 0x82F0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_12;                  // 0x8310(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x8330(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_45;                             // 0x83F0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_44;                             // 0x84F8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_33;                          // 0x8600(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_43;                             // 0x8628(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_15;                         // 0x8730(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_32;                          // 0x8888(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_31;                          // 0x88B0(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x88D8(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_11;                  // 0x8998(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_10;                  // 0x89B8(0x0020)
		unsigned char                                              UnknownData_LRSW[0x8];                                   // 0x89D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_12;                              // 0x89E0(0x01E0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x8BC0(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_10;                  // 0x8C80(0x0020)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_11;                              // 0x8CA0(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_10;                              // 0x8E80(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_42;                             // 0x9060(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x9168(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_30;                          // 0x9208(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_41;                             // 0x9230(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x9338(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x9428(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x94A8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x94D0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_14;                         // 0x94F8(0x0158)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_40;                             // 0x9650(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_39;                             // 0x9758(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_38;                             // 0x9860(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_37;                             // 0x9968(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_36;                             // 0x9A70(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_35;                             // 0x9B78(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x9C80(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x9DD8(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x9F30(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x9FB0(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0xA108(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0xA188(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_34;                             // 0xA228(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0xA330(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0xA420(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_33;                             // 0xA440(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0xA548(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_32;                             // 0xA568(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_31;                             // 0xA670(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_30;                             // 0xA778(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_29;                             // 0xA880(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_28;                             // 0xA988(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0xAA90(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0xABE8(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0xAC10(0x0158)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5;                             // 0xAD68(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0xAE30(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0xAE58(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0xAE80(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_27;                             // 0xAEA8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_26;                             // 0xAFB0(0x0108)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0xB0B8(0x0190)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_25;                             // 0xB248(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_24;                             // 0xB350(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_23;                             // 0xB458(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0xB560(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0xB580(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0xB5A0(0x0158)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0xB6F8(0x0190)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0xB888(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0xB8D0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0xB998(0x0080)
		unsigned char                                              UnknownData_2ZRC[0x8];                                   // 0xBA18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_9;                               // 0xBA20(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_8;                               // 0xBC00(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_22;                             // 0xBDE0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0xBEE8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0xBF08(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0xC060(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0xC088(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0xC0B0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0xC0D0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0xC0F0(0x0020)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0xC110(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0xC1D8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0xC278(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0xC2A0(0x0190)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0xC430(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0xC518(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0xC598(0x00C8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0xC660(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0xC728(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0xC750(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0xC8A8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0xC968(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_21;                             // 0xC990(0x0108)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0xCA98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0xCAC0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0xCAE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0xCB10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0xCB38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0xCB60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0xCB88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0xCBB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0xCBD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0xCC00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0xCC28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0xCC50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0xCC78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0xCCA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0xCCC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0xCCF0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0xCD18(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0xCD98(0x0030)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_4;                  // 0xCDC8(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0xCE98(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0xCF18(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0xCF40(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0xCF70(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0xCFF0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0xD020(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0xD0A0(0x0030)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_3;                  // 0xD0D0(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0xD1A0(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0xD220(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0xD248(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0xD278(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0xD2F8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0xD328(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0xD3A8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0xD3D8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0xD400(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0xD430(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0xD4E0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0xD580(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0xD600(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0xD680(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_20;                             // 0xD720(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0xD828(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0xD8C8(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0xD948(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0xDA30(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0xDAD0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0xDB70(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0xDBF0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0xDC70(0x00A0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_7;                               // 0xDD10(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_6;                               // 0xDEF0(0x01E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0xE0D0(0x00A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0xE170(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0xE190(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_19;                             // 0xE210(0x0108)
		unsigned char                                              UnknownData_BNLI[0x8];                                   // 0xE318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_5;                               // 0xE320(0x01E0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0xE500(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0xE520(0x0020)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_4;                               // 0xE540(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_18;                             // 0xE720(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0xE828(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0xE980(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0xEAD8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0xEB00(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0xEB28(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0xEB50(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0xEB78(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0xEBF8(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0xECB8(0x0108)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_3;                               // 0xEDC0(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0xEFA0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0xF0A8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0xF1B0(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0xF1D0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0xF290(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0xF2B8(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0xF2E0(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0xF3E8(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0xF488(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0xF590(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0xF650(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0xF758(0x0108)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0xF860(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0xF928(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0xF9E8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0xFA10(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0xFA38(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0xFA58(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0xFA78(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0xFB38(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0xFB80(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0xFBA8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0xFD00(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0xFD28(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0xFDE8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0xFEF0(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0xFFF8(0x00C0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x100B8(0x00E8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x101A0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x102A8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x103B0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x104B8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x104D8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x105E0(0x0020)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x10600(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x107E0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x108E8(0x0020)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_2;                  // 0x10908(0x00D0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x109D8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x10AC0(0x00E8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x10BA8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x10BD0(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x10C70(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x10D78(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x10E80(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x10F20(0x00E8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x11008(0x0108)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x11110(0x01E0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x112F0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x11338(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x11358(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x114B0(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x11608(0x0048)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x11650(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x11718(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x11740(0x00C0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x11800(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x11828(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x11850(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x11878(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x118A0(0x0028)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive;                    // 0x118C8(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x11998(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x119C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x11A40(0x0030)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x11A70(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x11B38(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x11B60(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x11BE0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x11C10(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x11C90(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x11CC0(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x11CE8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x11D18(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x11DC8(0x0030)
		float                                                      RotationSpeedHorizontalWithDirectionMultiplier;          // 0x11DF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RootBoneRotation;                                        // 0x11DFC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotationSpeedHorizontalWithDirectionCurrent;             // 0x11E08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootOffset_R;                                            // 0x11E0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootOffset_L;                                            // 0x11E10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PelvisZOffset;                                           // 0x11E14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            FootRotation_R;                                          // 0x11E18(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            FootRotation_L;                                          // 0x11E24(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FootRotation_R_Alpha;                                    // 0x11E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootRotation_L_Alpha;                                    // 0x11E34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PelvisZOffsetTarget;                                     // 0x11E38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootOffset_R_Target;                                     // 0x11E3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootOffset_L_Target;                                     // 0x11E40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPKM;                                                   // 0x11E44(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VWSX[0x3];                                   // 0x11E45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PKM_RotationPoint;                                       // 0x11E48(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PKM_Offset;                                              // 0x11E54(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PKM_CameraAimOffsetVector;                               // 0x11E60(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PKM_CameraAimOffsetVectorInverse;                        // 0x11E6C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IK_LeftHand_Alpha;                                       // 0x11E78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IK_RightHand_Alpha;                                      // 0x11E7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmptyHandsCurveValue;                                    // 0x11E80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            AimOffsetHeadRotation;                                   // 0x11E84(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PickupAlpha;                                             // 0x11E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KT6X[0xC];                                   // 0x11E94(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PickupFABRICEffectorTransform;                           // 0x11EA0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MixEmptyHands;                                           // 0x11ED0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinCameraOffset;                                         // 0x11ED4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WeaponAimOffset;                                         // 0x11ED8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Rest;                                                    // 0x11EDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OneMinusRest;                                            // 0x11EE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActionSlotAlpha;                                         // 0x11EE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BackpackTranslation;                                     // 0x11EE8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IK_Foot_Alpha;                                           // 0x11EF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PDA_Alpha;                                               // 0x11EF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandsAimOffsetUpAlpha;                                   // 0x11EFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HandsAimOffsetUpTranslationOffset;                       // 0x11F00(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IsRunAlpha;                                              // 0x11F0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SexAlpha;                                                // 0x11F10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FemaleGrenadeDownOffset;                                 // 0x11F14(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FemaleGrenadeMiddleDwnffset;                             // 0x11F20(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MyDeltaTime;                                             // 0x11F2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IKHand_L;                                                // 0x11F30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsServer;                                                // 0x11F34(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_41TT[0x3];                                   // 0x11F35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Devourer_Projectile_C*                           Spike;                                                   // 0x11F38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinSpeedToSwitchSwimmigStates;                           // 0x11F40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SwimmingAlpha;                                           // 0x11F44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InVehicle;                                               // 0x11F48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CXR5[0x3];                                   // 0x11F49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WheelAngle_1;                                            // 0x11F4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Vector_FootOffset_R;                                     // 0x11F50(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Vector_FootOffset_L_1;                                   // 0x11F5C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Vector_PelvisZOffset;                                    // 0x11F68(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Rotator_BodyUnderWater;                                  // 0x11F74(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Alpha_RHCenter;                                          // 0x11F80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_RHDown;                                            // 0x11F84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_RHUp;                                              // 0x11F88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_LHCenter;                                          // 0x11F8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_LHDown;                                            // 0x11F90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_LHUp;                                              // 0x11F94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      alpha_upperarm_l;                                        // 0x11F98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      alpha_lowerarm_l;                                        // 0x11F9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      alpha_lowerarm_l2;                                       // 0x11FA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      alpha_AimOffsetBoneRotation;                             // 0x11FA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      alpha_AimOffsetBoneRotation_Velosity;                    // 0x11FA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KnifeOnRunAttack_L;                                      // 0x11FAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KnifeOnRunAttack_R;                                      // 0x11FB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KnifeOnRunAttack;                                        // 0x11FB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Inspect;                                                 // 0x11FB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Debug_Crouch;                                            // 0x11FBC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T0D6[0x3];                                   // 0x11FBD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotInVehicle;                                            // 0x11FC0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsInVehicle;                                            // 0x11FCC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q5JJ[0x3];                                   // 0x11FCD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurrentHandsOffsetWithMonocular;                         // 0x11FD0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MSRAlpha;                                                // 0x11FDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MSRDesiredAlpha;                                         // 0x11FE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4HK3[0x4];                                   // 0x11FE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            BadWeponIDList;                                          // 0x11FE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bUseMortar;                                              // 0x11FF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UKD4[0x3];                                   // 0x11FF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MortarLeftHandTarget;                                    // 0x11FFC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MortarRightHandTarget;                                   // 0x12008(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MortarInclineAlphaInterp;                                // 0x12014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFishing;                                                // 0x12018(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DA0M[0x3];                                   // 0x12019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TiltWithRod;                                             // 0x1201C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void DotP(const struct FVector& v1, const struct FVector& v2, float Intencity, float* DotP);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_06B9A58B4BE07324DA461B9D8F1E9DA9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_4C3502CA405A59B667397BBBF61AD817();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_C21F12CB4DEC227F95554FB5F921FF9E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_58F36B814CF72CB38BE237A6803CE8E0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_490DE88C40246713C9EAC496DC2CE433();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_AD40BAB948222F7BEFD86B873F806F99();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_0C584F7B4C93FFA14432FFA1E05F9780();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_2AFC3D0B4E6321BA5B19AEA8BC09BD05();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_E0A21B3F481F7E2CDC47D59187FAC62F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TransitionResult_988A64CC4FFD9F19189703989322DC45();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_B43F5EAA4E72FE0C33504CB846837F14();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_0DEE68A2443812FD263BF8B9D4A4F023();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_FC40C8D1437B0C4503DD4294C7F75B1B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TwoWayBlend_C9589C66423A1C6FFFE96A90764DD5F3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_905514F640B7A83D3603D8810C5F0B0A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_81E25EAB490FA9E20B5838AF4F5CFF34();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_8E40739140FD9DF6C2D7CFA5E1F52140();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendSpacePlayer_D74BCD7F4DAF3502B1D34D825FF74DCF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_78DF447E46A63A7C7B52AEB617B72894();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_9B5022B34B1C77CF3CC7DAA48BB0CEA6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_7AD1B1A54EDEE61F4B7A04A03AAF7187();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_65BD74154FAD49A32205349FAB826370();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_810DFB3041D7203A6A8B7599F0C97875();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_Death();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TwoWayBlend_3FA229CE41308D358C88C8AB41F9070E();
		void BlueprintBeginPlay();
		void UpdateComplexity();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TwoWayBlend_D43F93C248359E9CC18342B7F1A98C1D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_LayeredBoneBlend_99B0270D4A5DA8AC990B20870B06B0BB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_8E19B94148392A1A0BA23BBA807A162C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TwoWayBlend_D54FCF2C44B0EAE685787AB4F0E5200E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_24AC7B33461DEF1CADCCC1B0E8F0BC62();
		void AnimNotify_GetSpikeExtractionShoulder();
		void AnimNotify_OnDiscardSpike();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendSpacePlayer_518232174B3B7EB6ECBC0BA7BF38F431();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_SequencePlayer_5C9A48CB44ACA8528C96259E1801050C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_519422EF4B6B68A03524C09E03A9827D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendSpacePlayer_3F35DBE347904175BBF0AC81F4E14537();
		void ExecuteUbergraph_AB_Male_TPC_Anim(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
