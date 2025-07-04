﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Skill03

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Skill03.GA_Skill03_C.ExecuteUbergraph_GA_Skill03
// 0x0340 (0x0340 - 0x0000)
struct GA_Skill03_C_ExecuteUbergraph_GA_Skill03 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc____________;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0018(0x00B8)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;  // 0x00D0(0x0028)(ZeroConstructor)
	struct FGameplayEventData                     ___struct_Variable;                                // 0x00F8(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01C0(0x0028)(ZeroConstructor)
	float                                         CallFunc__________SpeedRatio;                      // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________3;                              // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0230(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________4;                              // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0270(0x0028)(ZeroConstructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_____GA______________;                     // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x02D0(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0308(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________5;                              // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03) == 0x000008, "Wrong alignment on GA_Skill03_C_ExecuteUbergraph_GA_Skill03");
static_assert(sizeof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03) == 0x000340, "Wrong size on GA_Skill03_C_ExecuteUbergraph_GA_Skill03");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, EntryPoint) == 0x000000, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc__________) == 0x000008, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc____________) == 0x000010, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc____________' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_CustomEvent_Payload) == 0x000018, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_CreateDelegate_OutputDelegate) == 0x0000D0, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, ___struct_Variable) == 0x0000F8, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0001B0, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_IsValid_ReturnValue) == 0x0001B8, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001C0, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc__________SpeedRatio) == 0x0001E8, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc___________1) == 0x0001F0, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc______________) == 0x0001F8, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc___________2) == 0x000200, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc___________3) == 0x000208, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_______________1) == 0x000210, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000218, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_DynamicCast_AsTs_Base_Character) == 0x000220, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_DynamicCast_bSuccess) == 0x000228, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_CreateDelegate_OutputDelegate_2) == 0x000230, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000258, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc___________4) == 0x000260, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000268, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_CreateDelegate_OutputDelegate_3) == 0x000270, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_IsValid_ReturnValue_1) == 0x000298, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_GetDisplayName_ReturnValue) == 0x0002A0, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_GetObjectClass_ReturnValue) == 0x0002B0, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0002B8, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_____GA______________) == 0x0002C0, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002D0, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_Conv_NameToString_ReturnValue) == 0x0002F8, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, K2Node_CreateDelegate_OutputDelegate_5) == 0x000308, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc___________5) == 0x000330, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Skill03_C_ExecuteUbergraph_GA_Skill03, CallFunc_IsValid_ReturnValue_2) == 0x000338, "Member 'GA_Skill03_C_ExecuteUbergraph_GA_Skill03::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function GA_Skill03.GA_Skill03_C.EventReceived_8EC676D941E5C7FD48F4F7BAB15C4824
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Skill03_C_EventReceived_8EC676D941E5C7FD48F4F7BAB15C4824 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Skill03_C_EventReceived_8EC676D941E5C7FD48F4F7BAB15C4824) == 0x000008, "Wrong alignment on GA_Skill03_C_EventReceived_8EC676D941E5C7FD48F4F7BAB15C4824");
static_assert(sizeof(GA_Skill03_C_EventReceived_8EC676D941E5C7FD48F4F7BAB15C4824) == 0x0000B8, "Wrong size on GA_Skill03_C_EventReceived_8EC676D941E5C7FD48F4F7BAB15C4824");
static_assert(offsetof(GA_Skill03_C_EventReceived_8EC676D941E5C7FD48F4F7BAB15C4824, Payload) == 0x000000, "Member 'GA_Skill03_C_EventReceived_8EC676D941E5C7FD48F4F7BAB15C4824::Payload' has a wrong offset!");

}

