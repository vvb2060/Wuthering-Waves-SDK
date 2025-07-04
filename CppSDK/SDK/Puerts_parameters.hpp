﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Puerts

#include "Basic.hpp"


namespace SDK::Params
{

// Function Puerts.PuertsBlueprintLibrary.ExecuteModuleInSharedJsEnv
// 0x000C (0x000C - 0x0000)
struct PuertsBlueprintLibrary_ExecuteModuleInSharedJsEnv final
{
public:
	class FName                                   ModuleName;                                        // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PuertsBlueprintLibrary_ExecuteModuleInSharedJsEnv) == 0x000004, "Wrong alignment on PuertsBlueprintLibrary_ExecuteModuleInSharedJsEnv");
static_assert(sizeof(PuertsBlueprintLibrary_ExecuteModuleInSharedJsEnv) == 0x00000C, "Wrong size on PuertsBlueprintLibrary_ExecuteModuleInSharedJsEnv");
static_assert(offsetof(PuertsBlueprintLibrary_ExecuteModuleInSharedJsEnv, ModuleName) == 0x000000, "Member 'PuertsBlueprintLibrary_ExecuteModuleInSharedJsEnv::ModuleName' has a wrong offset!");

// Function Puerts.PuertsBlueprintLibrary.PreloadJS
// 0x0008 (0x0008 - 0x0000)
struct PuertsBlueprintLibrary_PreloadJS final
{
public:
	class UKuroPreloadJSCallback*                 Callback;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PuertsBlueprintLibrary_PreloadJS) == 0x000008, "Wrong alignment on PuertsBlueprintLibrary_PreloadJS");
static_assert(sizeof(PuertsBlueprintLibrary_PreloadJS) == 0x000008, "Wrong size on PuertsBlueprintLibrary_PreloadJS");
static_assert(offsetof(PuertsBlueprintLibrary_PreloadJS, Callback) == 0x000000, "Member 'PuertsBlueprintLibrary_PreloadJS::Callback' has a wrong offset!");

// Function Puerts.PuertsBlueprintLibrary.SetEnableBlueprintBind
// 0x0001 (0x0001 - 0x0000)
struct PuertsBlueprintLibrary_SetEnableBlueprintBind final
{
public:
	bool                                          value;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PuertsBlueprintLibrary_SetEnableBlueprintBind) == 0x000001, "Wrong alignment on PuertsBlueprintLibrary_SetEnableBlueprintBind");
static_assert(sizeof(PuertsBlueprintLibrary_SetEnableBlueprintBind) == 0x000001, "Wrong size on PuertsBlueprintLibrary_SetEnableBlueprintBind");
static_assert(offsetof(PuertsBlueprintLibrary_SetEnableBlueprintBind, value) == 0x000000, "Member 'PuertsBlueprintLibrary_SetEnableBlueprintBind::value' has a wrong offset!");

// Function Puerts.PuertsBlueprintLibrary.StartShareJsEnv
// 0x0018 (0x0018 - 0x0000)
struct PuertsBlueprintLibrary_StartShareJsEnv final
{
public:
	class FName                                   ModuleName;                                        // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          GameInstance;                                      // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PuertsBlueprintLibrary_StartShareJsEnv) == 0x000008, "Wrong alignment on PuertsBlueprintLibrary_StartShareJsEnv");
static_assert(sizeof(PuertsBlueprintLibrary_StartShareJsEnv) == 0x000018, "Wrong size on PuertsBlueprintLibrary_StartShareJsEnv");
static_assert(offsetof(PuertsBlueprintLibrary_StartShareJsEnv, ModuleName) == 0x000000, "Member 'PuertsBlueprintLibrary_StartShareJsEnv::ModuleName' has a wrong offset!");
static_assert(offsetof(PuertsBlueprintLibrary_StartShareJsEnv, GameInstance) == 0x000010, "Member 'PuertsBlueprintLibrary_StartShareJsEnv::GameInstance' has a wrong offset!");

}

