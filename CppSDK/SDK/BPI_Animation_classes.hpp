﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Animation

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Animation.BPI_Animation_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_Animation_C final
{
public:
	void InterfaceJumpPressed(float* Speed);
	void ClimbDash();
	void InterfaceSimulateJump(float Speed);
	void InterfaceFixHookDirect(const struct FVector& Offset);
	void InterfaceManipulateInteractDirection(float 角度);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Animation_C">();
	}
	static class IBPI_Animation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Animation_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IBPI_Animation_C) == 0x000001, "Wrong alignment on IBPI_Animation_C");
static_assert(sizeof(IBPI_Animation_C) == 0x000001, "Wrong size on IBPI_Animation_C");

}

