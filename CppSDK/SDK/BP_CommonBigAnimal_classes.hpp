﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CommonBigAnimal

#include "Basic.hpp"

#include "BP_BaseAnimal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CommonBigAnimal.BP_CommonBigAnimal_C
// 0x0000 (0x0760 - 0x0760)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_CommonBigAnimal_C : public ABP_BaseAnimal_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CommonBigAnimal_C">();
	}
	static class ABP_CommonBigAnimal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CommonBigAnimal_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_CommonBigAnimal_C) == 0x000010, "Wrong alignment on ABP_CommonBigAnimal_C");
static_assert(sizeof(ABP_CommonBigAnimal_C) == 0x000760, "Wrong size on ABP_CommonBigAnimal_C");

}

