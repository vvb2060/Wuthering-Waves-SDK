﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TASdkPlugin

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "TASdkPlugin_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class TASdkPlugin.TASaveConfig
// 0x0040 (0x0070 - 0x0030)
class UTASaveConfig final : public USaveGame
{
public:
	int32                                         TrackState;                                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DistinctID;                                        // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AccountID;                                         // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SuperProperties;                                   // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        UserIndex;                                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TASaveConfig">();
	}
	static class UTASaveConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTASaveConfig>();
	}
};
static_assert(alignof(UTASaveConfig) == 0x000008, "Wrong alignment on UTASaveConfig");
static_assert(sizeof(UTASaveConfig) == 0x000070, "Wrong size on UTASaveConfig");
static_assert(offsetof(UTASaveConfig, TrackState) == 0x000030, "Member 'UTASaveConfig::TrackState' has a wrong offset!");
static_assert(offsetof(UTASaveConfig, DistinctID) == 0x000038, "Member 'UTASaveConfig::DistinctID' has a wrong offset!");
static_assert(offsetof(UTASaveConfig, AccountID) == 0x000048, "Member 'UTASaveConfig::AccountID' has a wrong offset!");
static_assert(offsetof(UTASaveConfig, SuperProperties) == 0x000058, "Member 'UTASaveConfig::SuperProperties' has a wrong offset!");
static_assert(offsetof(UTASaveConfig, UserIndex) == 0x000068, "Member 'UTASaveConfig::UserIndex' has a wrong offset!");

// Class TASdkPlugin.TASaveEvent
// 0x0018 (0x0048 - 0x0030)
class UTASaveEvent final : public USaveGame
{
public:
	TArray<class FString>                         EventJsons;                                        // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                        UserIndex;                                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TASaveEvent">();
	}
	static class UTASaveEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTASaveEvent>();
	}
};
static_assert(alignof(UTASaveEvent) == 0x000008, "Wrong alignment on UTASaveEvent");
static_assert(sizeof(UTASaveEvent) == 0x000048, "Wrong size on UTASaveEvent");
static_assert(offsetof(UTASaveEvent, EventJsons) == 0x000030, "Member 'UTASaveEvent::EventJsons' has a wrong offset!");
static_assert(offsetof(UTASaveEvent, UserIndex) == 0x000040, "Member 'UTASaveEvent::UserIndex' has a wrong offset!");

// Class TASdkPlugin.TASaveEventV2
// 0x0010 (0x0040 - 0x0030)
class UTASaveEventV2 final : public USaveGame
{
public:
	TArray<struct FSingleEvent>                   EventsArray;                                       // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TASaveEventV2">();
	}
	static class UTASaveEventV2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTASaveEventV2>();
	}
};
static_assert(alignof(UTASaveEventV2) == 0x000008, "Wrong alignment on UTASaveEventV2");
static_assert(sizeof(UTASaveEventV2) == 0x000040, "Wrong size on UTASaveEventV2");
static_assert(offsetof(UTASaveEventV2, EventsArray) == 0x000030, "Member 'UTASaveEventV2::EventsArray' has a wrong offset!");

// Class TASdkPlugin.ThinkingAnalytics
// 0x0000 (0x0030 - 0x0030)
class UThinkingAnalytics final : public UBlueprintFunctionLibrary
{
public:
	static void CalibrateTime(const TDelegate<void(int32 Index)>& OnTimeCalibrated, int32 Index_0);
	static bool CreateSimpleInstance(const struct FCreateInstanceParam& Param);
	static void DestroyAllInstance(const bool Flush_0);
	static void DestroyInstance(const int32 Index_0, const bool Flush_0);
	static void EnableAutoTrack(int32 Index_0);
	static void EnableAutoTrackWithType(const TArray<class FString>& EventTypeList, int32 Index_0);
	static void EnableAutoTrackWithTypeAndProperties(const TArray<class FString>& EventTypeList, const class FString& Properties, int32 Index_0);
	static void EnableThirdPartySharing(const TArray<class FString>& EventTypeList, int32 Index_0);
	static void EnableTracking(bool bIsEnable, int32 Index_0);
	static void Flush(int32 Index_0);
	static class FString GetAppId(const int32 Index_0);
	static float GetCurrentCPUSampledAvgFrequency();
	static float GetCurrentCPUSampledMaxFrequency();
	static class FString GetDeviceId(int32 Index_0);
	static class FString GetDistinctId(int32 Index_0);
	static class FString GetMachineID();
	static class FString GetPresetProperties(int32 Index_0);
	static class FString GetServerUrl(const int32 Index_0);
	static class FString GetSuperProperties(int32 Index_0);
	static bool HasDefaultInstanceInitialized();
	static bool HasInstanceInitialized(int32 Index_0);
	static bool HasInstanceTimeCalibrated(int32 Index_0);
	static void Identify(const class FString& DistinctId, int32 Index_0);
	static bool Initialize();
	static bool InitializeDefaultInsWithURL_Appid(const class FString& ServerURL, const class FString& Appid, const float ExitWaitTime, const int32 MaxPendingLog, const float SendHttpTimeout, const bool bExitFlush, const float CalibrateIntervalTime, const bool bCalibratedStopTimer);
	static void InitializeEncryptInstance(const class FString& appid, const class FString& serverurl, ETAMode mode, bool bEnableLog, const class FString& timeZone, bool bEnableEncrypt, const class FString& EncryptPublicKey, int32 EncryptVersion, const class FString& SymmetricEncryption, const class FString& AsymmetricEncryption);
	static void Login(const class FString& AccountId, int32 Index_0);
	static void Logout(int32 Index_0);
	static void OptInTracking(int32 Index_0);
	static void OptOutTracking(int32 Index_0);
	static void SetTrackStatus(const int32 Status, int32 Index_0);
	static void TimeEvent(const class FString& EventName, int32 Index_0);
	static void ToggleSampleCPUFrequency(bool bActive, float SampleInterval);
	static bool Track(const class FString& EventName, const class FString& Properties, int32 Index_0);
	static bool TrackFirst(const class FString& EventName, const class FString& Properties, int32 Index_0);
	static bool TrackFirstWithId(const class FString& EventName, const class FString& Properties, const class FString& FirstCheckId, int32 Index_0);
	static bool TrackOverwrite(const class FString& EventName, const class FString& Properties, const class FString& EventId, int32 Index_0);
	static bool TrackUpdate(const class FString& EventName, const class FString& Properties, const class FString& EventId, int32 Index_0);
	static void UserAdd(const class FString& Property, const float Value, int32 Index_0);
	static void UserAppend(const class FString& Properties, int32 Index_0);
	static void UserDelete(int32 Index_0);
	static void UserSet(const class FString& Properties, int32 Index_0);
	static void UserSetOnce(const class FString& Properties, int32 Index_0);
	static void UserUniqueAppend(const class FString& Properties, int32 Index_0);
	static void UserUnset(const class FString& Property, int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ThinkingAnalytics">();
	}
	static class UThinkingAnalytics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThinkingAnalytics>();
	}
};
static_assert(alignof(UThinkingAnalytics) == 0x000008, "Wrong alignment on UThinkingAnalytics");
static_assert(sizeof(UThinkingAnalytics) == 0x000030, "Wrong size on UThinkingAnalytics");

// Class TASdkPlugin.ThinkingAnalyticsSettings
// 0x0068 (0x0098 - 0x0030)
class UThinkingAnalyticsSettings final : public UObject
{
public:
	class FString                                 ServerUrl;                                         // 0x0030(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppID;                                             // 0x0040(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableLog;                                        // 0x0050(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableEncrypt;                                    // 0x0051(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EncryptPublicKey;                                  // 0x0058(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EncryptVersion;                                    // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SymmetricEncryption;                               // 0x0070(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AsymmetricEncryption;                              // 0x0080(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxNumInBatch;                                     // 0x0090(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FlushTimeInterval;                                 // 0x0094(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ThinkingAnalyticsSettings">();
	}
	static class UThinkingAnalyticsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThinkingAnalyticsSettings>();
	}
};
static_assert(alignof(UThinkingAnalyticsSettings) == 0x000008, "Wrong alignment on UThinkingAnalyticsSettings");
static_assert(sizeof(UThinkingAnalyticsSettings) == 0x000098, "Wrong size on UThinkingAnalyticsSettings");
static_assert(offsetof(UThinkingAnalyticsSettings, ServerUrl) == 0x000030, "Member 'UThinkingAnalyticsSettings::ServerUrl' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, AppID) == 0x000040, "Member 'UThinkingAnalyticsSettings::AppID' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, bEnableLog) == 0x000050, "Member 'UThinkingAnalyticsSettings::bEnableLog' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, bEnableEncrypt) == 0x000051, "Member 'UThinkingAnalyticsSettings::bEnableEncrypt' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, EncryptPublicKey) == 0x000058, "Member 'UThinkingAnalyticsSettings::EncryptPublicKey' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, EncryptVersion) == 0x000068, "Member 'UThinkingAnalyticsSettings::EncryptVersion' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, SymmetricEncryption) == 0x000070, "Member 'UThinkingAnalyticsSettings::SymmetricEncryption' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, AsymmetricEncryption) == 0x000080, "Member 'UThinkingAnalyticsSettings::AsymmetricEncryption' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, MaxNumInBatch) == 0x000090, "Member 'UThinkingAnalyticsSettings::MaxNumInBatch' has a wrong offset!");
static_assert(offsetof(UThinkingAnalyticsSettings, FlushTimeInterval) == 0x000094, "Member 'UThinkingAnalyticsSettings::FlushTimeInterval' has a wrong offset!");

}

