﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WP_Rainy

#include "Basic.hpp"

#include "WeatherPreset_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WP_Rainy.WP_Rainy_C
// 0x0000 (0x00A0 - 0x00A0)
class UWP_Rainy_C final : public UWeatherPreset_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WP_Rainy_C">();
	}
	static class UWP_Rainy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWP_Rainy_C>();
	}
};
static_assert(alignof(UWP_Rainy_C) == 0x000008, "Wrong alignment on UWP_Rainy_C");
static_assert(sizeof(UWP_Rainy_C) == 0x0000A0, "Wrong size on UWP_Rainy_C");

}

