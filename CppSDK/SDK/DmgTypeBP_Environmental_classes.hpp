﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DmgTypeBP_Environmental

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C
// 0x0000 (0x0048 - 0x0048)
class UDmgTypeBP_Environmental_C final : public UDamageType
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DmgTypeBP_Environmental_C">();
	}
	static class UDmgTypeBP_Environmental_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDmgTypeBP_Environmental_C>();
	}
};
static_assert(alignof(UDmgTypeBP_Environmental_C) == 0x000008, "Wrong alignment on UDmgTypeBP_Environmental_C");
static_assert(sizeof(UDmgTypeBP_Environmental_C) == 0x000048, "Wrong size on UDmgTypeBP_Environmental_C");

}

