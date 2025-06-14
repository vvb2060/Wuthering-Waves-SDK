﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WindowsDeviceProfileSelector

#include "Basic.hpp"

#include "WindowsDeviceProfileSelector_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class WindowsDeviceProfileSelector.WindowsDeviceProfileMatchingRules
// 0x0010 (0x0040 - 0x0030)
class UWindowsDeviceProfileMatchingRules final : public UObject
{
public:
	TArray<struct FWindowsDeviceProfileMatch>     MatchProfile;                                      // 0x0030(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WindowsDeviceProfileMatchingRules">();
	}
	static class UWindowsDeviceProfileMatchingRules* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWindowsDeviceProfileMatchingRules>();
	}
};
static_assert(alignof(UWindowsDeviceProfileMatchingRules) == 0x000008, "Wrong alignment on UWindowsDeviceProfileMatchingRules");
static_assert(sizeof(UWindowsDeviceProfileMatchingRules) == 0x000040, "Wrong size on UWindowsDeviceProfileMatchingRules");
static_assert(offsetof(UWindowsDeviceProfileMatchingRules, MatchProfile) == 0x000030, "Member 'UWindowsDeviceProfileMatchingRules::MatchProfile' has a wrong offset!");

}

