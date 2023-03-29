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
	 * BlueprintGeneratedClass MainMenu.MainMenu_C
	 * Size -> 0x01C8 (FullSize[0x0880] - InheritedSize[0x06B8])
	 */
	class AMainMenu_C : public AWTLMainMenuLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_MainMenu_Pawn_C*                                 CameraPawn;                                              // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Acc;                                                     // 0x06C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IW92[0x4];                                   // 0x06CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DesiredCameraPosition;                                   // 0x06D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          OriginalCameraPosition;                                  // 0x0700(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          CharacterCameraPosition;                                 // 0x0730(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          CharacterHeadCameraPosition;                             // 0x0760(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          CharacterTorsoCameraPosition;                            // 0x0790(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          CharacterLegsCameraPosition;                             // 0x07C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          CharacterFeetCameraPosition;                             // 0x07F0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          CharacterWatchesCameraPosition;                          // 0x0820(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          CharacterBackpackCameraPosition;                         // 0x0850(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(float DeltaSeconds);
		void MoveCameraToOriginalPoint();
		void MoveCameraToCharacterTorsoPoint();
		void MoveCameraToCharacterPoint();
		void MoveCameraToCharacterHeadPoint();
		void MoveCameraToCharacterLegsPoint();
		void MoveCameraToCharacterFeetPoint();
		void MoveCameraToCharacterWatchesPoint();
		void MoveCameraToCharacterBackpackPoint();
		void MoveCameraToCharacterCommonPoint();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
