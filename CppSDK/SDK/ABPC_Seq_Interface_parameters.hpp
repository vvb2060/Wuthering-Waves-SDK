﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABPC_Seq_Interface

#include "Basic.hpp"


namespace SDK::Params
{

// Function ABPC_Seq_Interface.ABPC_Seq_Interface_C.GetABPC_Body_V2
// 0x0008 (0x0008 - 0x0000)
struct ABPC_Seq_Interface_C_GetABPC_Body_V2 final
{
public:
	class UABPC_Seq_Body_V2_C*                    ABPC_Body_V2;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABPC_Seq_Interface_C_GetABPC_Body_V2) == 0x000008, "Wrong alignment on ABPC_Seq_Interface_C_GetABPC_Body_V2");
static_assert(sizeof(ABPC_Seq_Interface_C_GetABPC_Body_V2) == 0x000008, "Wrong size on ABPC_Seq_Interface_C_GetABPC_Body_V2");
static_assert(offsetof(ABPC_Seq_Interface_C_GetABPC_Body_V2, ABPC_Body_V2) == 0x000000, "Member 'ABPC_Seq_Interface_C_GetABPC_Body_V2::ABPC_Body_V2' has a wrong offset!");

}

