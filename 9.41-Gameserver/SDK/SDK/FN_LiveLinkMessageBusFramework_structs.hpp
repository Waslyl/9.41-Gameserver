#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
struct FLiveLinkClearSubject
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
struct FLiveLinkHeartbeatMessage
{
public:
	uint8                                        Pad_2591[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
struct FLiveLinkConnectMessage
{
public:
	uint8                                        Pad_2592[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
struct FLiveLinkPongMessage
{
public:
	class FString                                ProviderName;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MachineName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PollRequest;                                       // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
struct FLiveLinkPingMessage
{
public:
	struct FGuid                                 PollRequest;                                       // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
struct FLiveLinkSubjectFrameMessage
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Transforms;                                        // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkCurveElement>         Curves;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x28(0x60)(NativeAccessSpecifierPublic)
	double                                       Time;                                              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
struct FLiveLinkSubjectDataMessage
{
public:
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x0(0x20)(NativeAccessSpecifierPublic)
	class FName                                  SubjectName;                                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


