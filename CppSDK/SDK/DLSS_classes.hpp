﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DLSS

#include "Basic.hpp"

#include "DLSS_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DLSS.DLSSOverrideSettings
// 0x0008 (0x0038 - 0x0030)
class UDLSSOverrideSettings final : public UObject
{
public:
	EDLSSSettingOverride                          EnableDLSSInEditorViewportsOverride;               // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSSettingOverride                          EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x0031(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSSettingOverride                          EnableDLSSInPlayInEditorViewportsOverride;         // 0x0032(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x0033(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSSettingOverride                          ShowDLSSSDebugOnScreenMessages;                    // 0x0034(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSOverrideSettings">();
	}
	static class UDLSSOverrideSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSOverrideSettings>();
	}
};
static_assert(alignof(UDLSSOverrideSettings) == 0x000008, "Wrong alignment on UDLSSOverrideSettings");
static_assert(sizeof(UDLSSOverrideSettings) == 0x000038, "Wrong size on UDLSSOverrideSettings");
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride) == 0x000030, "Member 'UDLSSOverrideSettings::EnableDLSSInEditorViewportsOverride' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, EnableScreenpercentageManipulationInDLSSEditorViewportsOverride) == 0x000031, "Member 'UDLSSOverrideSettings::EnableScreenpercentageManipulationInDLSSEditorViewportsOverride' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride) == 0x000032, "Member 'UDLSSOverrideSettings::EnableDLSSInPlayInEditorViewportsOverride' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, bShowDLSSIncompatiblePluginsToolsWarnings) == 0x000033, "Member 'UDLSSOverrideSettings::bShowDLSSIncompatiblePluginsToolsWarnings' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages) == 0x000034, "Member 'UDLSSOverrideSettings::ShowDLSSSDebugOnScreenMessages' has a wrong offset!");

// Class DLSS.DLSSSettings
// 0x0038 (0x0068 - 0x0030)
class UDLSSSettings final : public UObject
{
public:
	bool                                          bEnableDLSSD3D12;                                  // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSD3D11;                                  // 0x0031(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSVulkan;                                 // 0x0032(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSInEditorViewports;                      // 0x0033(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x0034(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSInPlayInEditorViewports;                // 0x0035(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowDLSSSDebugOnScreenMessages;                   // 0x0036(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GenericDLSSBinaryPath;                             // 0x0038(0x0010)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenericDLSSBinaryExists;                          // 0x0048(0x0001)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        NVIDIANGXApplicationId;                            // 0x004C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CustomDLSSBinaryPath;                              // 0x0050(0x0010)(Edit, ZeroConstructor, Config, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCustomDLSSBinaryExists;                           // 0x0060(0x0001)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowOTAUpdate;                                   // 0x0061(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLAAPreset;                                        // 0x0062(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_63[0x1];                                       // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	EDLSSPreset                                   DLSSQualityPreset;                                 // 0x0064(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSBalancedPreset;                                // 0x0065(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSPerformancePreset;                             // 0x0066(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSUltraPerformancePreset;                        // 0x0067(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSSettings">();
	}
	static class UDLSSSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSSettings>();
	}
};
static_assert(alignof(UDLSSSettings) == 0x000008, "Wrong alignment on UDLSSSettings");
static_assert(sizeof(UDLSSSettings) == 0x000068, "Wrong size on UDLSSSettings");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D12) == 0x000030, "Member 'UDLSSSettings::bEnableDLSSD3D12' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D11) == 0x000031, "Member 'UDLSSSettings::bEnableDLSSD3D11' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSVulkan) == 0x000032, "Member 'UDLSSSettings::bEnableDLSSVulkan' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSInEditorViewports) == 0x000033, "Member 'UDLSSSettings::bEnableDLSSInEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableScreenpercentageManipulationInDLSSEditorViewports) == 0x000034, "Member 'UDLSSSettings::bEnableScreenpercentageManipulationInDLSSEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSInPlayInEditorViewports) == 0x000035, "Member 'UDLSSSettings::bEnableDLSSInPlayInEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bShowDLSSSDebugOnScreenMessages) == 0x000036, "Member 'UDLSSSettings::bShowDLSSSDebugOnScreenMessages' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, GenericDLSSBinaryPath) == 0x000038, "Member 'UDLSSSettings::GenericDLSSBinaryPath' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bGenericDLSSBinaryExists) == 0x000048, "Member 'UDLSSSettings::bGenericDLSSBinaryExists' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, NVIDIANGXApplicationId) == 0x00004C, "Member 'UDLSSSettings::NVIDIANGXApplicationId' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, CustomDLSSBinaryPath) == 0x000050, "Member 'UDLSSSettings::CustomDLSSBinaryPath' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bCustomDLSSBinaryExists) == 0x000060, "Member 'UDLSSSettings::bCustomDLSSBinaryExists' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bAllowOTAUpdate) == 0x000061, "Member 'UDLSSSettings::bAllowOTAUpdate' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLAAPreset) == 0x000062, "Member 'UDLSSSettings::DLAAPreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLSSQualityPreset) == 0x000064, "Member 'UDLSSSettings::DLSSQualityPreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLSSBalancedPreset) == 0x000065, "Member 'UDLSSSettings::DLSSBalancedPreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLSSPerformancePreset) == 0x000066, "Member 'UDLSSSettings::DLSSPerformancePreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLSSUltraPerformancePreset) == 0x000067, "Member 'UDLSSSettings::DLSSUltraPerformancePreset' has a wrong offset!");

}

