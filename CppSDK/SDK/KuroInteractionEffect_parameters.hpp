﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroInteractionEffect

#include "Basic.hpp"

#include "KuroInteractionEffect_structs.hpp"


namespace SDK::Params
{

// Function KuroInteractionEffect.KuroEnviInteractionComponent.GetEnviInteractionData
// 0x0080 (0x0080 - 0x0000)
struct KuroEnviInteractionComponent_GetEnviInteractionData final
{
public:
	struct FKuroEnviInteractionData               ReturnValue;                                       // 0x0000(0x0080)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroEnviInteractionComponent_GetEnviInteractionData) == 0x000008, "Wrong alignment on KuroEnviInteractionComponent_GetEnviInteractionData");
static_assert(sizeof(KuroEnviInteractionComponent_GetEnviInteractionData) == 0x000080, "Wrong size on KuroEnviInteractionComponent_GetEnviInteractionData");
static_assert(offsetof(KuroEnviInteractionComponent_GetEnviInteractionData, ReturnValue) == 0x000000, "Member 'KuroEnviInteractionComponent_GetEnviInteractionData::ReturnValue' has a wrong offset!");

// Function KuroInteractionEffect.KuroEnviInteractionComponent.GetRainWalkOcclusionParam
// 0x0004 (0x0004 - 0x0000)
struct KuroEnviInteractionComponent_GetRainWalkOcclusionParam final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroEnviInteractionComponent_GetRainWalkOcclusionParam) == 0x000004, "Wrong alignment on KuroEnviInteractionComponent_GetRainWalkOcclusionParam");
static_assert(sizeof(KuroEnviInteractionComponent_GetRainWalkOcclusionParam) == 0x000004, "Wrong size on KuroEnviInteractionComponent_GetRainWalkOcclusionParam");
static_assert(offsetof(KuroEnviInteractionComponent_GetRainWalkOcclusionParam, ReturnValue) == 0x000000, "Member 'KuroEnviInteractionComponent_GetRainWalkOcclusionParam::ReturnValue' has a wrong offset!");

// Function KuroInteractionEffect.KuroEnviInteractionComponent.SetDecalCompShiftColor
// 0x0008 (0x0008 - 0x0000)
struct KuroEnviInteractionComponent_SetDecalCompShiftColor final
{
public:
	class UDecalComponent*                        DecalComponent;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroEnviInteractionComponent_SetDecalCompShiftColor) == 0x000008, "Wrong alignment on KuroEnviInteractionComponent_SetDecalCompShiftColor");
static_assert(sizeof(KuroEnviInteractionComponent_SetDecalCompShiftColor) == 0x000008, "Wrong size on KuroEnviInteractionComponent_SetDecalCompShiftColor");
static_assert(offsetof(KuroEnviInteractionComponent_SetDecalCompShiftColor, DecalComponent) == 0x000000, "Member 'KuroEnviInteractionComponent_SetDecalCompShiftColor::DecalComponent' has a wrong offset!");

// Function KuroInteractionEffect.KuroEnviInteractionComponent.SetNiagaraCompShiftColor
// 0x0008 (0x0008 - 0x0000)
struct KuroEnviInteractionComponent_SetNiagaraCompShiftColor final
{
public:
	class UNiagaraComponent*                      NiagaraComponent;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroEnviInteractionComponent_SetNiagaraCompShiftColor) == 0x000008, "Wrong alignment on KuroEnviInteractionComponent_SetNiagaraCompShiftColor");
static_assert(sizeof(KuroEnviInteractionComponent_SetNiagaraCompShiftColor) == 0x000008, "Wrong size on KuroEnviInteractionComponent_SetNiagaraCompShiftColor");
static_assert(offsetof(KuroEnviInteractionComponent_SetNiagaraCompShiftColor, NiagaraComponent) == 0x000000, "Member 'KuroEnviInteractionComponent_SetNiagaraCompShiftColor::NiagaraComponent' has a wrong offset!");

// Function KuroInteractionEffect.KuroEnviInteractionComponent.UpdateRainOcclusion
// 0x0020 (0x0020 - 0x0000)
struct KuroEnviInteractionComponent_UpdateRainOcclusion final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTraceBaseElement*                      Element;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        Frame;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        Index_0;                                           // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroEnviInteractionComponent_UpdateRainOcclusion) == 0x000008, "Wrong alignment on KuroEnviInteractionComponent_UpdateRainOcclusion");
static_assert(sizeof(KuroEnviInteractionComponent_UpdateRainOcclusion) == 0x000020, "Wrong size on KuroEnviInteractionComponent_UpdateRainOcclusion");
static_assert(offsetof(KuroEnviInteractionComponent_UpdateRainOcclusion, Result) == 0x000000, "Member 'KuroEnviInteractionComponent_UpdateRainOcclusion::Result' has a wrong offset!");
static_assert(offsetof(KuroEnviInteractionComponent_UpdateRainOcclusion, Element) == 0x000008, "Member 'KuroEnviInteractionComponent_UpdateRainOcclusion::Element' has a wrong offset!");
static_assert(offsetof(KuroEnviInteractionComponent_UpdateRainOcclusion, Frame) == 0x000010, "Member 'KuroEnviInteractionComponent_UpdateRainOcclusion::Frame' has a wrong offset!");
static_assert(offsetof(KuroEnviInteractionComponent_UpdateRainOcclusion, Index_0) == 0x000018, "Member 'KuroEnviInteractionComponent_UpdateRainOcclusion::Index_0' has a wrong offset!");

// Function KuroInteractionEffect.KuroInteractionEffectSystem.GetKuroInteractionEffectSystem
// 0x0010 (0x0010 - 0x0000)
struct KuroInteractionEffectSystem_GetKuroInteractionEffectSystem final
{
public:
	class UWorld*                                 World;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKuroInteractionEffectSystem*           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroInteractionEffectSystem_GetKuroInteractionEffectSystem) == 0x000008, "Wrong alignment on KuroInteractionEffectSystem_GetKuroInteractionEffectSystem");
static_assert(sizeof(KuroInteractionEffectSystem_GetKuroInteractionEffectSystem) == 0x000010, "Wrong size on KuroInteractionEffectSystem_GetKuroInteractionEffectSystem");
static_assert(offsetof(KuroInteractionEffectSystem_GetKuroInteractionEffectSystem, World) == 0x000000, "Member 'KuroInteractionEffectSystem_GetKuroInteractionEffectSystem::World' has a wrong offset!");
static_assert(offsetof(KuroInteractionEffectSystem_GetKuroInteractionEffectSystem, ReturnValue) == 0x000008, "Member 'KuroInteractionEffectSystem_GetKuroInteractionEffectSystem::ReturnValue' has a wrong offset!");

// Function KuroInteractionEffect.KuroInteractionEffectSystem.RegisterNDIKuroRenderingEIComp
// 0x0010 (0x0010 - 0x0000)
struct KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp final
{
public:
	class UNiagaraComponent*                      InNiagaraComp;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKuroEnviInteractionComponent*          SourceEIComp;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp) == 0x000008, "Wrong alignment on KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp");
static_assert(sizeof(KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp) == 0x000010, "Wrong size on KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp");
static_assert(offsetof(KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp, InNiagaraComp) == 0x000000, "Member 'KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp::InNiagaraComp' has a wrong offset!");
static_assert(offsetof(KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp, SourceEIComp) == 0x000008, "Member 'KuroInteractionEffectSystem_RegisterNDIKuroRenderingEIComp::SourceEIComp' has a wrong offset!");

// Function KuroInteractionEffect.KuroInteractionEffectSystem.RegisterSPModelCharacterEIComp
// 0x0010 (0x0010 - 0x0000)
struct KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp final
{
public:
	class UNiagaraComponent*                      InNiagaraComp;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKuroEnviInteractionComponent*          SourceEIComp;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp) == 0x000008, "Wrong alignment on KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp");
static_assert(sizeof(KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp) == 0x000010, "Wrong size on KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp");
static_assert(offsetof(KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp, InNiagaraComp) == 0x000000, "Member 'KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp::InNiagaraComp' has a wrong offset!");
static_assert(offsetof(KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp, SourceEIComp) == 0x000008, "Member 'KuroInteractionEffectSystem_RegisterSPModelCharacterEIComp::SourceEIComp' has a wrong offset!");

}

