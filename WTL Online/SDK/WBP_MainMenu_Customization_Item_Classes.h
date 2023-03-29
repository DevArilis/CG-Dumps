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
	 * WidgetBlueprintGeneratedClass WBP_MainMenu_Customization_Item.WBP_MainMenu_Customization_Item_C
	 * Size -> 0x0020 (FullSize[0x05E0] - InheritedSize[0x05C0])
	 */
	class UWBP_MainMenu_Customization_Item_C : public UWTLMainMenuCustomizationItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowPurchasedAnim;                                       // 0x05C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              imgCredits;                                              // 0x05D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              imgNoImage;                                              // 0x05D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Construct();
		void ExecuteUbergraph_WBP_MainMenu_Customization_Item(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
