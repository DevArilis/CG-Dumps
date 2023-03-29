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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SCUE4.SafeVector3D
	 * Size -> 0x0078
	 */
	struct FSafeVector3D
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueX;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueY;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueZ;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftX;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftY;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftZ;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0070(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_35Y3[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeRotator
	 * Size -> 0x0078
	 */
	struct FSafeRotator
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueX;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueY;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueZ;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftX;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftY;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftZ;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0070(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0OW7[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeTransform
	 * Size -> 0x0168
	 */
	struct FSafeTransform
	{
	public:
		struct FSafeVector3D                                       Scale;                                                   // 0x0000(0x0078) Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSafeVector3D                                       Position;                                                // 0x0078(0x0078) Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSafeRotator                                        Rotation;                                                // 0x00F0(0x0078) Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SCUE4.SafeColor
	 * Size -> 0x0098
	 */
	struct FSafeColor
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueR;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueG;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueB;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueA;                                                   // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftR;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftG;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftB;                                                  // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftA;                                                  // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0090(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WC8T[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeVector4D
	 * Size -> 0x0098
	 */
	struct FSafeVector4D
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueX;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueY;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueZ;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueW;                                                   // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftX;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftY;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftZ;                                                  // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftW;                                                  // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0090(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XI6Y[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeVector2D
	 * Size -> 0x0058
	 */
	struct FSafeVector2D
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueX;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueY;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftX;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftY;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0050(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KQ3H[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeText
	 * Size -> 0x0038
	 */
	struct FSafeText
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueValue;                                               // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EFXP[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeString
	 * Size -> 0x0038
	 */
	struct FSafeString
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueValue;                                               // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TSC4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeName
	 * Size -> 0x0038
	 */
	struct FSafeName
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueValue;                                               // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHBS[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeFloat
	 * Size -> 0x0038
	 */
	struct FSafeFloat
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueValue;                                               // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2CA3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeInt
	 * Size -> 0x0038
	 */
	struct FSafeInt
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueValue;                                               // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V7VO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeByte
	 * Size -> 0x0038
	 */
	struct FSafeByte
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueValue;                                               // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4I2O[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeBool
	 * Size -> 0x0038
	 */
	struct FSafeBool
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueValue;                                               // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D1UN[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
