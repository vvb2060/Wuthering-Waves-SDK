﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavmeshPartition

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "NavmeshPartition_structs.hpp"


namespace SDK
{

// Class NavmeshPartition.AudioMaterialComponent
// 0x0010 (0x0230 - 0x0220)
class UAudioMaterialComponent final : public USceneComponent
{
public:
	uint8                                         Pad_218[0x18];                                     // 0x0218(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMaterialComponent">();
	}
	static class UAudioMaterialComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMaterialComponent>();
	}
};
static_assert(alignof(UAudioMaterialComponent) == 0x000010, "Wrong alignment on UAudioMaterialComponent");
static_assert(sizeof(UAudioMaterialComponent) == 0x000230, "Wrong size on UAudioMaterialComponent");

// Class NavmeshPartition.NavmeshPartitionBaseActor
// 0x0010 (0x02C0 - 0x02B0)
class ANavmeshPartitionBaseActor : public AActor
{
public:
	class UNavmeshPartitionComponent*             NavmeshPartitionComp;                              // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENavPartition                                 Type;                                              // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionBaseActor">();
	}
	static class ANavmeshPartitionBaseActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavmeshPartitionBaseActor>();
	}
};
static_assert(alignof(ANavmeshPartitionBaseActor) == 0x000008, "Wrong alignment on ANavmeshPartitionBaseActor");
static_assert(sizeof(ANavmeshPartitionBaseActor) == 0x0002C0, "Wrong size on ANavmeshPartitionBaseActor");
static_assert(offsetof(ANavmeshPartitionBaseActor, NavmeshPartitionComp) == 0x0002B0, "Member 'ANavmeshPartitionBaseActor::NavmeshPartitionComp' has a wrong offset!");
static_assert(offsetof(ANavmeshPartitionBaseActor, Type) == 0x0002B8, "Member 'ANavmeshPartitionBaseActor::Type' has a wrong offset!");

// Class NavmeshPartition.NavmeshPartitionActor
// 0x0008 (0x02C8 - 0x02C0)
class ANavmeshPartitionActor final : public ANavmeshPartitionBaseActor
{
public:
	class UAudioMaterialComponent*                AudioMaterialComp;                                 // 0x02C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionActor">();
	}
	static class ANavmeshPartitionActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavmeshPartitionActor>();
	}
};
static_assert(alignof(ANavmeshPartitionActor) == 0x000008, "Wrong alignment on ANavmeshPartitionActor");
static_assert(sizeof(ANavmeshPartitionActor) == 0x0002C8, "Wrong size on ANavmeshPartitionActor");
static_assert(offsetof(ANavmeshPartitionActor, AudioMaterialComp) == 0x0002C0, "Member 'ANavmeshPartitionActor::AudioMaterialComp' has a wrong offset!");

// Class NavmeshPartition.NavmeshPartitionComponent
// 0x0050 (0x0270 - 0x0220)
class UNavmeshPartitionComponent final : public USceneComponent
{
public:
	uint8                                         Pad_218[0x58];                                     // 0x0218(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionComponent">();
	}
	static class UNavmeshPartitionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavmeshPartitionComponent>();
	}
};
static_assert(alignof(UNavmeshPartitionComponent) == 0x000010, "Wrong alignment on UNavmeshPartitionComponent");
static_assert(sizeof(UNavmeshPartitionComponent) == 0x000270, "Wrong size on UNavmeshPartitionComponent");

// Class NavmeshPartition.NavmeshPartitionGlobalBaseActor
// 0x0010 (0x02C0 - 0x02B0)
class ANavmeshPartitionGlobalBaseActor : public AActor
{
public:
	uint8                                         Pad_2B0[0x8];                                      // 0x02B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ENavPartition                                 Type;                                              // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionGlobalBaseActor">();
	}
	static class ANavmeshPartitionGlobalBaseActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavmeshPartitionGlobalBaseActor>();
	}
};
static_assert(alignof(ANavmeshPartitionGlobalBaseActor) == 0x000008, "Wrong alignment on ANavmeshPartitionGlobalBaseActor");
static_assert(sizeof(ANavmeshPartitionGlobalBaseActor) == 0x0002C0, "Wrong size on ANavmeshPartitionGlobalBaseActor");
static_assert(offsetof(ANavmeshPartitionGlobalBaseActor, Type) == 0x0002B8, "Member 'ANavmeshPartitionGlobalBaseActor::Type' has a wrong offset!");

// Class NavmeshPartition.NavmeshPartitionGlobalActor
// 0x0000 (0x02C0 - 0x02C0)
class ANavmeshPartitionGlobalActor final : public ANavmeshPartitionGlobalBaseActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionGlobalActor">();
	}
	static class ANavmeshPartitionGlobalActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavmeshPartitionGlobalActor>();
	}
};
static_assert(alignof(ANavmeshPartitionGlobalActor) == 0x000008, "Wrong alignment on ANavmeshPartitionGlobalActor");
static_assert(sizeof(ANavmeshPartitionGlobalActor) == 0x0002C0, "Wrong size on ANavmeshPartitionGlobalActor");

// Class NavmeshPartition.NavmeshPartitionGlobalComponent
// 0x00A0 (0x02C0 - 0x0220)
class UNavmeshPartitionGlobalComponent final : public USceneComponent
{
public:
	uint8                                         Pad_218[0xA8];                                     // 0x0218(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionGlobalComponent">();
	}
	static class UNavmeshPartitionGlobalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavmeshPartitionGlobalComponent>();
	}
};
static_assert(alignof(UNavmeshPartitionGlobalComponent) == 0x000010, "Wrong alignment on UNavmeshPartitionGlobalComponent");
static_assert(sizeof(UNavmeshPartitionGlobalComponent) == 0x0002C0, "Wrong size on UNavmeshPartitionGlobalComponent");

// Class NavmeshPartition.NavmeshWaterPartitionActor
// 0x0000 (0x02C0 - 0x02C0)
class ANavmeshWaterPartitionActor final : public ANavmeshPartitionBaseActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshWaterPartitionActor">();
	}
	static class ANavmeshWaterPartitionActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavmeshWaterPartitionActor>();
	}
};
static_assert(alignof(ANavmeshWaterPartitionActor) == 0x000008, "Wrong alignment on ANavmeshWaterPartitionActor");
static_assert(sizeof(ANavmeshWaterPartitionActor) == 0x0002C0, "Wrong size on ANavmeshWaterPartitionActor");

// Class NavmeshPartition.NavmeshWaterPartitionGlobalActor
// 0x0000 (0x02C0 - 0x02C0)
class ANavmeshWaterPartitionGlobalActor final : public ANavmeshPartitionGlobalBaseActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshWaterPartitionGlobalActor">();
	}
	static class ANavmeshWaterPartitionGlobalActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavmeshWaterPartitionGlobalActor>();
	}
};
static_assert(alignof(ANavmeshWaterPartitionGlobalActor) == 0x000008, "Wrong alignment on ANavmeshWaterPartitionGlobalActor");
static_assert(sizeof(ANavmeshWaterPartitionGlobalActor) == 0x0002C0, "Wrong size on ANavmeshWaterPartitionGlobalActor");

}

