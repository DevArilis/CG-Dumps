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
	 * Class NVIDIAGfeSDK.HighlightsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void Poll();
		void ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, EGfeSDKPermission* Video, EGfeSDKPermission* Screenshots);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.InitHighlights
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UInitHighlights : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44FI[0xB0];                                  // 0x0050(0x00B0) MISSED OFFSET (PADDING)

	public:
		class UInitHighlights* InitHighlights(class UObject* WorldContextObject, const class FString& InGameName, bool Video, bool Screenshots);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsConfigureAsync
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP1Y[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UHighlightsConfigureAsync* HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWRE[0x68];                                  // 0x0050(0x0068) MISSED OFFSET (PADDING)

	public:
		class UHighlightsOpenGroupAsync* HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8DT[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UHighlightsCloseGroupAsync* HighlightsCloseGroup(class UObject* WorldContextObject, const class FString& GroupId, bool DestroyHighlights);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BHZQ[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UHighlightsSetScreenshotAsync* HighlightsSetScreenshot(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsSetVideoAsync
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHY4[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UHighlightsSetVideoAsync* HighlightsSetVideo(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId, int32_t StartDelta, int32_t EndDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsSummaryAsync
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMOW[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class UHighlightsSummaryAsync* HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsGetNumberAsync
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BL2[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UHighlightsGetNumberAsync* HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const class FString& GroupId, EGfeSDKHighlightType TagFilter, EGfeSDKHighlightSignificance SignificanceFilter);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.RequestPermissionsAsync
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class URequestPermissionsAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26JO[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class URequestPermissionsAsync* GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
