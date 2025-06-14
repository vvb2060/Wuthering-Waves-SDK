﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyAddMotionVertexOffset

#include "Basic.hpp"

#include "AnimNotifyAddMaterialControllerData_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass AnimNotifyAddMotionVertexOffset.AnimNotifyAddMotionVertexOffset_C
// 0x0000 (0x0058 - 0x0058)
class UAnimNotifyAddMotionVertexOffset_C final : public UAnimNotifyAddMaterialControllerData_C
{
public:
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyAddMotionVertexOffset_C">();
	}
	static class UAnimNotifyAddMotionVertexOffset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyAddMotionVertexOffset_C>();
	}
};
static_assert(alignof(UAnimNotifyAddMotionVertexOffset_C) == 0x000008, "Wrong alignment on UAnimNotifyAddMotionVertexOffset_C");
static_assert(sizeof(UAnimNotifyAddMotionVertexOffset_C) == 0x000058, "Wrong size on UAnimNotifyAddMotionVertexOffset_C");

}

