﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Born_Vision

#include "Basic.hpp"

#include "SVisionData_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Born_Vision.GA_Born_Vision_C.ExecuteUbergraph_GA_Born_Vision
// 0x0488 (0x0488 - 0x0000)
struct GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc____________;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0028)(ZeroConstructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc__________;                                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00A0(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_____GA______________;                     // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00D8(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc___________1;                              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0118(0x0028)(ZeroConstructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0150(0x00B8)()
	bool                                          CallFunc______________;                            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20A[0x6];                                      // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________3;                              // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_5; // 0x0230(0x0028)(ZeroConstructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____ID___ID;                              // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSummonerEntityId_ReturnValue;          // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc_____ID_______;                            // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_____ID___________;                        // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x3];                                      // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIntValueByEntityWithCharacter_ReturnValue; // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_____________1;                            // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSVisionData                           CallFunc_____________2;                            // 0x0288(0x0098)(ContainsInstancedReference, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x3];                                      // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_____ID___ID_1;                            // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x3];                                      // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc__________SpeedRatio;                      // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________7;                              // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________8;                              // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     ___struct_Variable;                                // 0x0370(0x00B8)()
	bool                                          CallFunc_____________3;                            // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________9;                              // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________10;                             // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_____________4;                            // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________11;                             // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____ID___ID_2;                            // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character_1;          // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________12;                             // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc___________13;                             // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision) == 0x000008, "Wrong alignment on GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision");
static_assert(sizeof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision) == 0x000488, "Wrong size on GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, EntryPoint) == 0x000000, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc____________) == 0x000008, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc____________' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000070, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc__________) == 0x000078, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_GetDisplayName_ReturnValue) == 0x000080, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_GetObjectClass_ReturnValue) == 0x000090, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000098, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000A0, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____GA______________) == 0x0000C8, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000D8, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_Conv_NameToString_ReturnValue) == 0x000100, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________1) == 0x000110, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_CreateDelegate_OutputDelegate_4) == 0x000118, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_IsValid_ReturnValue_2) == 0x000140, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________2) == 0x000148, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_CustomEvent_Payload) == 0x000150, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc______________) == 0x000208, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, ___bool_IsClosed_Variable) == 0x000209, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________3) == 0x000210, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, ___bool_Has_Been_Initd_Variable) == 0x000218, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000220, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_IsValid_ReturnValue_3) == 0x000228, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_CreateDelegate_OutputDelegate_5) == 0x000230, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_Event_bWasCancelled) == 0x000258, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________4) == 0x000260, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____ID___ID) == 0x000268, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____ID___ID' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_GetSummonerEntityId_ReturnValue) == 0x00026C, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_GetSummonerEntityId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____ID_______) == 0x000270, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____ID_______' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____ID___________) == 0x000278, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____ID___________' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_GetIntValueByEntityWithCharacter_ReturnValue) == 0x00027C, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_GetIntValueByEntityWithCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____________1) == 0x000280, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____________1' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____________2) == 0x000288, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____________2' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_DynamicCast_AsTs_Base_Character) == 0x000320, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_DynamicCast_bSuccess) == 0x000328, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____ID___ID_1) == 0x00032C, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____ID___ID_1' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_NotEqual_NameName_ReturnValue) == 0x000330, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________5) == 0x000338, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_______________1) == 0x000340, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc__________SpeedRatio) == 0x000344, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000348, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________6) == 0x000350, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_IsValid_ReturnValue_4) == 0x000358, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________7) == 0x000360, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________7' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________8) == 0x000368, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________8' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, ___struct_Variable) == 0x000370, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____________3) == 0x000428, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____________3' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________9) == 0x000430, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________9' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________10) == 0x000438, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________10' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____________4) == 0x000440, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____________4' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________11) == 0x000448, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________11' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000450, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_____ID___ID_2) == 0x000458, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_____ID___ID_2' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_DynamicCast_AsTs_Base_Character_1) == 0x000460, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_DynamicCast_AsTs_Base_Character_1' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, K2Node_DynamicCast_bSuccess_1) == 0x000468, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________12) == 0x000470, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________12' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc___________13) == 0x000478, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc___________13' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision, CallFunc_IsValid_ReturnValue_5) == 0x000480, "Member 'GA_Born_Vision_C_ExecuteUbergraph_GA_Born_Vision::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function GA_Born_Vision.GA_Born_Vision_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Born_Vision_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Born_Vision_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Born_Vision_C_K2_OnEndAbility");
static_assert(sizeof(GA_Born_Vision_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Born_Vision_C_K2_OnEndAbility");
static_assert(offsetof(GA_Born_Vision_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Born_Vision_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Born_Vision.GA_Born_Vision_C.EventReceived_18B59F5945020DB23C42FD889881D7F7
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Born_Vision_C_EventReceived_18B59F5945020DB23C42FD889881D7F7 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Born_Vision_C_EventReceived_18B59F5945020DB23C42FD889881D7F7) == 0x000008, "Wrong alignment on GA_Born_Vision_C_EventReceived_18B59F5945020DB23C42FD889881D7F7");
static_assert(sizeof(GA_Born_Vision_C_EventReceived_18B59F5945020DB23C42FD889881D7F7) == 0x0000B8, "Wrong size on GA_Born_Vision_C_EventReceived_18B59F5945020DB23C42FD889881D7F7");
static_assert(offsetof(GA_Born_Vision_C_EventReceived_18B59F5945020DB23C42FD889881D7F7, Payload) == 0x000000, "Member 'GA_Born_Vision_C_EventReceived_18B59F5945020DB23C42FD889881D7F7::Payload' has a wrong offset!");

// Function GA_Born_Vision.GA_Born_Vision_C.获取幻象数据
// 0x0160 (0x0160 - 0x0000)
struct GA_Born_Vision_C_获取幻象数据 final
{
public:
	int32                                         幻象ID;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSVisionData                           幻象数据;                                          // 0x0008(0x0098)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSVisionData                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x00C0(0x0098)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Born_Vision_C_获取幻象数据) == 0x000008, "Wrong alignment on GA_Born_Vision_C_获取幻象数据");
static_assert(sizeof(GA_Born_Vision_C_获取幻象数据) == 0x000160, "Wrong size on GA_Born_Vision_C_获取幻象数据");
static_assert(offsetof(GA_Born_Vision_C_获取幻象数据, 幻象ID) == 0x000000, "Member 'GA_Born_Vision_C_获取幻象数据::幻象ID' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_获取幻象数据, 幻象数据) == 0x000008, "Member 'GA_Born_Vision_C_获取幻象数据::幻象数据' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_获取幻象数据, CallFunc_Conv_IntToString_ReturnValue) == 0x0000A0, "Member 'GA_Born_Vision_C_获取幻象数据::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_获取幻象数据, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B0, "Member 'GA_Born_Vision_C_获取幻象数据::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_获取幻象数据, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000C0, "Member 'GA_Born_Vision_C_获取幻象数据::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(GA_Born_Vision_C_获取幻象数据, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000158, "Member 'GA_Born_Vision_C_获取幻象数据::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}

