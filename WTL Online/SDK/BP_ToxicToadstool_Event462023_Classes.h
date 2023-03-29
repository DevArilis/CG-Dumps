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
	 * BlueprintGeneratedClass BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C
	 * Size -> 0x0019 (FullSize[0x02A1] - InheritedSize[0x0288])
	 */
	class ABP_ToxicToadstool_Event462023_C : public AWTLItemPickup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       RCanUse;                                                 // 0x0290(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HBCG[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BPName;                                                  // 0x0294(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CVisibility;                                             // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InitVFX();
		bool BPCanBeUsed(class AWTLCharacter* Character);
		void CUpdateState();
		class FString BPGetDisplayText(class AWTLCharacter* Character);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void BPUse(class AWTLCharacter* Character);
		void ClientOnUse(class AWTLCharacter* Character);
		void BPOnTakeItem(class AWTLCharacter* Character);
		void ExecuteUbergraph_BP_ToxicToadstool_Event462023(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
