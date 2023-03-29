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
	 * WidgetBlueprintGeneratedClass WBP_MainMenu_ErrorNotificator.WBP_MainMenu_ErrorNotificator_C
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UWBP_MainMenu_ErrorNotificator_C : public UWTLCommonNotificator
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void ExecuteUbergraph_WBP_MainMenu_ErrorNotificator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
