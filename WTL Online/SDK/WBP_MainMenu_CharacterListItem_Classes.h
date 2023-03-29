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
	 * WidgetBlueprintGeneratedClass WBP_MainMenu_CharacterListItem.WBP_MainMenu_CharacterListItem_C
	 * Size -> 0x0038 (FullSize[0x1220] - InheritedSize[0x11E8])
	 */
	class UWBP_MainMenu_CharacterListItem_C : public UWTLMainMenuCharacterListItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x11E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    EditBtnAttentionAnim;                                    // 0x11F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x11F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x1200(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x1208(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x1210(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              imgCredits;                                              // 0x1218(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Construct();
		void ExecuteUbergraph_WBP_MainMenu_CharacterListItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
