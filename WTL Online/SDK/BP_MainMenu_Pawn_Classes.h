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
	 * BlueprintGeneratedClass BP_MainMenu_Pawn.BP_MainMenu_Pawn_C
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class ABP_MainMenu_Pawn_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCineCameraComponent*                                CineCamera;                                              // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_MainMenu_Pawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
