﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_QTE

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Common_QTE.GA_Common_QTE_C.ExecuteUbergraph_GA_Common_QTE
// 0x0350 (0x0350 - 0x0000)
struct GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc__________SpeedRatio;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B8)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;  // 0x00C0(0x0028)(ZeroConstructor)
	struct FGameplayEventData                     ___struct_Variable;                                // 0x00E8(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01F0(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________3;                              // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0258(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_____GA______________;                     // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x02A0(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________4;                              // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x02D8(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________5;                              // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0310(0x0028)(ZeroConstructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc____________;                              // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};
static_assert(alignof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE) == 0x000008, "Wrong alignment on GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE");
static_assert(sizeof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE) == 0x000350, "Wrong size on GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, EntryPoint) == 0x000000, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc__________SpeedRatio) == 0x000004, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, ___struct_Variable) == 0x0000E8, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0001A0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_IsValid_ReturnValue) == 0x0001A8, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc__________) == 0x0001B0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc______________) == 0x0001B8, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc___________1) == 0x0001C0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc___________2) == 0x0001C8, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_______________1) == 0x0001D0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x0001D8, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_DynamicCast_AsTs_Base_Character) == 0x0001E0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_DynamicCast_bSuccess) == 0x0001E8, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001F0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000218, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc___________3) == 0x000220, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000228, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_GetDisplayName_ReturnValue) == 0x000230, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_IsValid_ReturnValue_1) == 0x000240, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_GetObjectClass_ReturnValue) == 0x000248, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000250, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_CreateDelegate_OutputDelegate_2) == 0x000258, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_____GA______________) == 0x000280, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_Conv_NameToString_ReturnValue) == 0x000290, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002A0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc___________4) == 0x0002C8, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_IsValid_ReturnValue_2) == 0x0002D0, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002D8, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc___________5) == 0x000300, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc_IsValid_ReturnValue_3) == 0x000308, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_CreateDelegate_OutputDelegate_5) == 0x000310, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, K2Node_Event_bWasCancelled) == 0x000338, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc___________6) == 0x000340, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE, CallFunc____________) == 0x000348, "Member 'GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE::CallFunc____________' has a wrong offset!");

// Function GA_Common_QTE.GA_Common_QTE_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Common_QTE_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Common_QTE_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Common_QTE_C_K2_OnEndAbility");
static_assert(sizeof(GA_Common_QTE_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Common_QTE_C_K2_OnEndAbility");
static_assert(offsetof(GA_Common_QTE_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Common_QTE_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Common_QTE.GA_Common_QTE_C.EventReceived_E8C2FC224B0A82D0076DE58540825291
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Common_QTE_C_EventReceived_E8C2FC224B0A82D0076DE58540825291 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Common_QTE_C_EventReceived_E8C2FC224B0A82D0076DE58540825291) == 0x000008, "Wrong alignment on GA_Common_QTE_C_EventReceived_E8C2FC224B0A82D0076DE58540825291");
static_assert(sizeof(GA_Common_QTE_C_EventReceived_E8C2FC224B0A82D0076DE58540825291) == 0x0000B8, "Wrong size on GA_Common_QTE_C_EventReceived_E8C2FC224B0A82D0076DE58540825291");
static_assert(offsetof(GA_Common_QTE_C_EventReceived_E8C2FC224B0A82D0076DE58540825291, Payload) == 0x000000, "Member 'GA_Common_QTE_C_EventReceived_E8C2FC224B0A82D0076DE58540825291::Payload' has a wrong offset!");

}

