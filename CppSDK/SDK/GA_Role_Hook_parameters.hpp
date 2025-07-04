﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Hook

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Role_Hook.GA_Role_Hook_C.ExecuteUbergraph_GA_Role_Hook
// 0x04B0 (0x04B0 - 0x0000)
struct GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue;             // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0070(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc__________;                                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B0(0x0028)(ZeroConstructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x00E8(0x0020)()
	bool                                          CallFunc______________;                            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10A[0x6];                                      // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_____GA______________;                     // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc______Output;                              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0158(0x0028)(ZeroConstructor)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________3;                              // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMoveInput_ReturnValue;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     ___struct_Variable;                                // 0x01B0(0x00B8)()
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0270(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc__________SpeedRatio;                      // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________7;                              // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc_________Actor_____;                       // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________8;                              // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x3];                                      // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x02E8(0x00B8)()
	bool                                          CallFunc_IsMovingOnGround_ReturnValue;             // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x03A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x03B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________9;                              // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________10;                             // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________11;                             // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x03E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________12;                             // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x0400(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________13;                             // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________14;                             // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________15;                             // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Kuro_GetBlockDirectWhenMove_ReturnValue;  // 0x0448(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0454(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0461(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_462[0x2];                                      // 0x0462(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X_1;                          // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_5; // 0x0470(0x0028)(ZeroConstructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0499(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49A[0x6];                                      // 0x049A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________16;                             // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsAnyTag_ReturnValue;               // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook) == 0x000008, "Wrong alignment on GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook");
static_assert(sizeof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook) == 0x0004B0, "Wrong size on GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, EntryPoint) == 0x000000, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_MakeVectorDouble_ReturnValue) == 0x000008, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_MakeVectorDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_CreateDelegate_OutputDelegate_2) == 0x000070, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_Conv_NameToString_ReturnValue) == 0x000098, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc__________) == 0x0000A8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________1) == 0x0000E0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x0000E8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc______________) == 0x000108, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_Event_bWasCancelled) == 0x000109, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_____GA______________) == 0x000110, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________2) == 0x000120, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000128, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_GetCameraRotation_ReturnValue) == 0x000130, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakRotator_Roll) == 0x00013C, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakRotator_Pitch) == 0x000140, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakRotator_Yaw) == 0x000144, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc______Output) == 0x000148, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc______Output' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_Add_FloatFloat_ReturnValue) == 0x00014C, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_FClamp_ReturnValue) == 0x000150, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_CreateDelegate_OutputDelegate_4) == 0x000158, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_FClamp_ReturnValue_1) == 0x000180, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________3) == 0x000188, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_HasMoveInput_ReturnValue) == 0x000190, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_HasMoveInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________4) == 0x000198, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0001A0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_IsValid_ReturnValue_1) == 0x0001A8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, ___struct_Variable) == 0x0001B0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________5) == 0x000268, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000270, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000280, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________6) == 0x000288, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc__________SpeedRatio) == 0x000290, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_______________1) == 0x000294, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________7) == 0x000298, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________7' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_________Actor_____) == 0x0002A0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_________Actor_____' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002A8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________8) == 0x0002B0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________8' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0002B8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_GetDisplayName_ReturnValue) == 0x0002C0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_IsValid_ReturnValue_2) == 0x0002D0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_GetObjectClass_ReturnValue) == 0x0002D8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0002E0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0002E4, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_CustomEvent_Payload) == 0x0002E8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_IsMovingOnGround_ReturnValue) == 0x0003A0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_IsMovingOnGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_Conv_IntToString_ReturnValue) == 0x0003A8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0003B8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________9) == 0x0003C8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________9' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________10) == 0x0003D0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________10' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________11) == 0x0003D8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________11' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x0003E0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________12) == 0x0003F8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________12' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x000400, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000418, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_DynamicCast_AsTs_Base_Character) == 0x000420, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_DynamicCast_bSuccess) == 0x000428, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________13) == 0x000430, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________13' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________14) == 0x000438, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________14' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________15) == 0x000440, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________15' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_Kuro_GetBlockDirectWhenMove_ReturnValue) == 0x000448, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_Kuro_GetBlockDirectWhenMove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakVector_X) == 0x000454, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakVector_Y) == 0x000458, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakVector_Z) == 0x00045C, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_Less_FloatFloat_ReturnValue) == 0x000460, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000461, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakVector_X_1) == 0x000464, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakVector_Y_1) == 0x000468, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BreakVector_Z_1) == 0x00046C, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, K2Node_CreateDelegate_OutputDelegate_5) == 0x000470, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000498, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_BooleanAND_ReturnValue) == 0x000499, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc___________16) == 0x0004A0, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc___________16' has a wrong offset!");
static_assert(offsetof(GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook, CallFunc_ContainsAnyTag_ReturnValue) == 0x0004A8, "Member 'GA_Role_Hook_C_ExecuteUbergraph_GA_Role_Hook::CallFunc_ContainsAnyTag_ReturnValue' has a wrong offset!");

// Function GA_Role_Hook.GA_Role_Hook_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Role_Hook_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_Hook_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Role_Hook_C_K2_OnEndAbility");
static_assert(sizeof(GA_Role_Hook_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Role_Hook_C_K2_OnEndAbility");
static_assert(offsetof(GA_Role_Hook_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Role_Hook_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Role_Hook.GA_Role_Hook_C.EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Role_Hook_C_EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Role_Hook_C_EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B) == 0x000008, "Wrong alignment on GA_Role_Hook_C_EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B");
static_assert(sizeof(GA_Role_Hook_C_EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B) == 0x0000B8, "Wrong size on GA_Role_Hook_C_EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B");
static_assert(offsetof(GA_Role_Hook_C_EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B, Payload) == 0x000000, "Member 'GA_Role_Hook_C_EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B::Payload' has a wrong offset!");

}

