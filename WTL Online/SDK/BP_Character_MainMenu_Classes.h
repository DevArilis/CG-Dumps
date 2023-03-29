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
	 * BlueprintGeneratedClass BP_Character_MainMenu.BP_Character_MainMenu_C
	 * Size -> 0x0018 (FullSize[0x05B8] - InheritedSize[0x05A0])
	 */
	class ABP_Character_MainMenu_C : public AWTLMainMenuCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      EyeBlink_NewTrack_0_2938E1A04E1409EE58A4BB8331E7642D;    // 0x05A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         EyeBlink__Direction_2938E1A04E1409EE58A4BB8331E7642D;    // 0x05AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_FUX0[0x3];                                   // 0x05AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  EyeBlink;                                                // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EyeBlink__FinishedFunc();
		void EyeBlink__UpdateFunc();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Character_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
