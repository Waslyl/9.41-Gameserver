#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x970 - 0x951)
// BlueprintGeneratedClass GAT_Athena_Bush.GAT_Athena_Bush_C
class UGAT_Athena_Bush_C : public UGAT_TriggeredAbility_C
{
public:
	uint8                                        Pad_52FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              BushItemDef;                                       // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAT_Athena_Bush_C* GetDefaultObj();

	void RemoveBush(class AFortPlayerPawn* PlayerPawn, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AAthena_Player_Bush_C* K2Node_DynamicCast_AsAthena_Player_Bush, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Athena_Bush(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


