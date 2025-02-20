#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x21 - 0x0)
// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_OnEndAbility
struct UGA_Rift_Athena_Skydive_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5
struct UGA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5_Params
{
public:
	enum class EMovementMode                     NewMovementMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnDestroyed_Event_0
struct UGA_Rift_Athena_Skydive_C_OnDestroyed_Event_0_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21D (0x21D - 0x0)
// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive
struct UGA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x30(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller;            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSkydiving_ReturnValue;                  // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4830[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;         // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_VehicleIsInAir_ReturnValue;               // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4831[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller_1;          // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4832[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component; // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4833[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4834[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0xF8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x100(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x10C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4835[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitMovementModeChange*   CallFunc_CreateWaitMovementModeChange_ReturnValue; // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4836[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueAtLevel_ReturnValue_3;            // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     Temp_byte_Variable;                                // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4837[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_1;       // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortCharacterVehicle_Ostrich*         K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich; // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4838[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AJackalVehicle_Athena_C*               K2Node_DynamicCast_AsJackal_Vehicle_Athena;        // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4839[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaFerretVehicle*              K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle;   // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_483A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller_2;          // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_483B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_2;       // 0x198(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue_1;                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_483C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_483D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller_3;          // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMovementMode                     K2Node_CustomEvent_NewMovementMode;                // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_483E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1D4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_483F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_DestroyedActor;                 // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1F0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x200(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4840[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x20C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


