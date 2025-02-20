#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// (Actor, PlayerController)

class UClass* AAthena_PlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerController_C");

	return Clss;
}


// Athena_PlayerController_C Athena_PlayerController.Default__Athena_PlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_PlayerController_C* AAthena_PlayerController_C::GetDefaultObj()
{
	static class AAthena_PlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_PlayerController_C*>(AAthena_PlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCreativeModePlaylist_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCreativeLTMPlaylist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AAthena_PlayerController_C::Is_Creative_Mode(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCreativeModePlaylist_ReturnValue, bool CallFunc_IsCreativeLTMPlaylist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "Is Creative Mode");

	Params::AAthena_PlayerController_C_Is_Creative_Mode_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCreativeModePlaylist_ReturnValue = CallFunc_IsCreativeModePlaylist_ReturnValue;
	Parms.CallFunc_IsCreativeLTMPlaylist_ReturnValue = CallFunc_IsCreativeLTMPlaylist_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::SetupPermissionRecheckTimer(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "SetupPermissionRecheckTimer");

	Params::AAthena_PlayerController_C_SetupPermissionRecheckTimer_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLeftVolumes                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InTempVolume                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// TArray<class AFortVolume*>         ContainingVolumes                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolumeManager*          CallFunc_GetVolumeManager_OutVolumeManager                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVolumeValidityResult   CallFunc_GetVolumeManager_OutIsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortVolume*>         CallFunc_GetVolumesForLocation_Volumes                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetVolumesForLocation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_PlayerController_C::LeftAllVolumes(bool* bLeftVolumes, bool InTempVolume, const TArray<class AFortVolume*>& ContainingVolumes, int32 Temp_int_Array_Index_Variable, class AFortVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool CallFunc_IsDead_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AFortVolume*>& CallFunc_GetVolumesForLocation_Volumes, bool CallFunc_GetVolumesForLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "LeftAllVolumes");

	Params::AAthena_PlayerController_C_LeftAllVolumes_Params Parms{};

	Parms.InTempVolume = InTempVolume;
	Parms.ContainingVolumes = ContainingVolumes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetVolumeManager_OutVolumeManager = CallFunc_GetVolumeManager_OutVolumeManager;
	Parms.CallFunc_GetVolumeManager_OutIsValid = CallFunc_GetVolumeManager_OutIsValid;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue = CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetVolumesForLocation_Volumes = CallFunc_GetVolumesForLocation_Volumes;
	Parms.CallFunc_GetVolumesForLocation_ReturnValue = CallFunc_GetVolumesForLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bLeftVolumes != nullptr)
		*bLeftVolumes = Parms.bLeftVolumes;

}


// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMarkerComponent*      CallFunc_GetMarkerComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::UserConstructionScript(class UAthenaMarkerComponent* CallFunc_GetMarkerComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "UserConstructionScript");

	Params::AAthena_PlayerController_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMarkerComponent_ReturnValue = CallFunc_GetMarkerComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D");

	Params::AAthena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               Playlist                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthena_PlayerController_C::OnReady_B4409EAB4038578B1EBA9DB1586489B9(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnReady_B4409EAB4038578B1EBA9DB1586489B9");

	Params::AAthena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReceiveEndPlay");

	Params::AAthena_PlayerController_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::Start_Victory_Royale_Music()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "Start Victory Royale Music");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition*NewMusicPack                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnMusicPackLoaded");

	Params::AAthena_PlayerController_C_OnMusicPackLoaded_Params Parms{};

	Parms.NewMusicPack = NewMusicPack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.OnLeaveVolume
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortVolume*                 Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::OnLeaveVolume(class AFortVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnLeaveVolume");

	Params::AAthena_PlayerController_C_OnLeaveVolume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.OnEnterVolume
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortVolume*                 Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::OnEnterVolume(class AFortVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnEnterVolume");

	Params::AAthena_PlayerController_C_OnEnterVolume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.HandlePermissions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortVolume*                 Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::HandlePermissions(class AFortVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "HandlePermissions");

	Params::AAthena_PlayerController_C_HandlePermissions_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.GrantItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UFortWorldItemDefinition>Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AAthena_PlayerController_C::GrantItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "GrantItem");

	Params::AAthena_PlayerController_C_GrantItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UFortWorldItemDefinition>Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AAthena_PlayerController_C::RevokeItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "RevokeItem");

	Params::AAthena_PlayerController_C_RevokeItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.PermissionsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::PermissionsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "PermissionsChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ReceivingActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::OnLocalInteraction(class AActor* ReceivingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnLocalInteraction");

	Params::AAthena_PlayerController_C_OnLocalInteraction_Params Parms{};

	Parms.ReceivingActor = ReceivingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::RemoveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "RemoveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_PlayerController.Athena_PlayerController_C.RevokeCreativeTool
// (Event, Public, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::RevokeCreativeTool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "RevokeCreativeTool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::ReactToPawnPossession(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReactToPawnPossession");

	Params::AAthena_PlayerController_C_ReactToPawnPossession_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       FinisherPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   FinishingWeapon                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeathCause             DeathCause                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAudioOnly                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_PlayerController_C::PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause, bool bAudioOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "PlayWinEffects");

	Params::AAthena_PlayerController_C_PlayWinEffects_Params Parms{};

	Parms.FinisherPawn = FinisherPawn;
	Parms.FinishingWeapon = FinishingWeapon;
	Parms.DeathCause = DeathCause;
	Parms.bAudioOnly = bAudioOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ReplicateRotationScaleReset
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::ReplicateRotationScaleReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReplicateRotationScaleReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (None)
// class UFortPlaylist*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CurrentPlaylistReady*CallFunc_PlaylistDataReadyAsync_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameStateAthena*        K2Node_CustomEvent_GameState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               K2Node_CustomEvent_Playlist                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAthenaMusicPackItemDefinition*K2Node_CustomEvent_NewMusicPack                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 K2Node_Event_Volume_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 K2Node_Event_Volume                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// bool                               CallFunc_IsCreativeModePlaylist_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LeftAllVolumes_bLeftVolumes                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCreativeModePlaylist_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 K2Node_CustomEvent_Volume                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadOnly_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortLevelSaveComponent*>CallFunc_GetComponentsByClass_ReturnValue                        (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortLevelSaveComponent*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlayerHavePermissionToEdit_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFortWorldItemDefinition>K2Node_CustomEvent_Item_1                                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFortWorldItemDefinition>K2Node_CustomEvent_Item                                          (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_K2_RemoveItemFromPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 CallFunc_GetCurrentVolume_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ReceivingActor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 K2Node_DynamicCast_AsFort_Pickup                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_PossessedPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCreativeModePlaylist_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_Event_FinisherPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_Event_FinishingWeapon                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeathCause             K2Node_Event_DeathCause                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAudioOnly                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetWeaponActorClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsB_Ranged_Generic                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Creative_Mode_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolumeManager*          CallFunc_GetVolumeManager_OutVolumeManager                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVolumeValidityResult   CallFunc_GetVolumeManager_OutIsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 CallFunc_GetVolumeForLocation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMusicPackItemDefinition*CallFunc_GetEquippedMusicPack_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class USoundCue*                   CallFunc_GetVictoryStinger_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, float CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class AFortVolume* K2Node_Event_Volume_1, class AFortVolume* K2Node_Event_Volume, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_IsCreativeModePlaylist_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool CallFunc_LeftAllVolumes_bLeftVolumes, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsCreativeModePlaylist_ReturnValue_1, class AFortVolume* K2Node_CustomEvent_Volume, bool CallFunc_IsReadOnly_ReturnValue, TArray<class UFortLevelSaveComponent*>& CallFunc_GetComponentsByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortLevelSaveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_DoesPlayerHavePermissionToEdit_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess_3, TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, class AFortVolume* CallFunc_GetCurrentVolume_ReturnValue, class AActor* K2Node_Event_ReceivingActor, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess_5, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class APawn* K2Node_CustomEvent_PossessedPawn, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, class UObject* Temp_object_Variable_2, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_2, bool K2Node_DynamicCast_bSuccess_7, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition_2, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsCreativeModePlaylist_ReturnValue_2, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, class APawn* K2Node_Event_FinisherPawn, class UFortWeaponItemDefinition* K2Node_Event_FinishingWeapon, enum class EDeathCause K2Node_Event_DeathCause, bool K2Node_Event_bAudioOnly, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UClass* CallFunc_GetWeaponActorClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsB_Ranged_Generic, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Is_Creative_Mode_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AFortVolume* CallFunc_GetVolumeForLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UFortMusicContext* CallFunc_GetContext_ReturnValue_1, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class USoundCue* CallFunc_GetVictoryStinger_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "ExecuteUbergraph_Athena_PlayerController");

	Params::AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_PlaylistDataReadyAsync_ReturnValue = CallFunc_PlaylistDataReadyAsync_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue = CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_GameState = K2Node_CustomEvent_GameState;
	Parms.K2Node_CustomEvent_Playlist = K2Node_CustomEvent_Playlist;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NewMusicPack = K2Node_CustomEvent_NewMusicPack;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Volume_1 = K2Node_Event_Volume_1;
	Parms.K2Node_Event_Volume = K2Node_Event_Volume;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_IsCreativeModePlaylist_ReturnValue = CallFunc_IsCreativeModePlaylist_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_LeftAllVolumes_bLeftVolumes = CallFunc_LeftAllVolumes_bLeftVolumes;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena_1 = K2Node_DynamicCast_AsFort_Game_State_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsCreativeModePlaylist_ReturnValue_1 = CallFunc_IsCreativeModePlaylist_ReturnValue_1;
	Parms.K2Node_CustomEvent_Volume = K2Node_CustomEvent_Volume;
	Parms.CallFunc_IsReadOnly_ReturnValue = CallFunc_IsReadOnly_ReturnValue;
	Parms.CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_DoesPlayerHavePermissionToEdit_ReturnValue = CallFunc_DoesPlayerHavePermissionToEdit_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition = K2Node_DynamicCast_AsFort_World_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition_1 = K2Node_DynamicCast_AsFort_World_Item_Definition_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;
	Parms.CallFunc_GetCurrentVolume_ReturnValue = CallFunc_GetCurrentVolume_ReturnValue;
	Parms.K2Node_Event_ReceivingActor = K2Node_Event_ReceivingActor;
	Parms.K2Node_DynamicCast_AsFort_Pickup = K2Node_DynamicCast_AsFort_Pickup;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_CustomEvent_PossessedPawn = K2Node_CustomEvent_PossessedPawn;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena_2 = K2Node_DynamicCast_AsFort_Game_State_Athena_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition_2 = K2Node_DynamicCast_AsFort_World_Item_Definition_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsCreativeModePlaylist_ReturnValue_2 = CallFunc_IsCreativeModePlaylist_ReturnValue_2;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1 = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_Event_FinisherPawn = K2Node_Event_FinisherPawn;
	Parms.K2Node_Event_FinishingWeapon = K2Node_Event_FinishingWeapon;
	Parms.K2Node_Event_DeathCause = K2Node_Event_DeathCause;
	Parms.K2Node_Event_bAudioOnly = K2Node_Event_bAudioOnly;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetWeaponActorClass_ReturnValue = CallFunc_GetWeaponActorClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual = K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsB_Ranged_Generic = K2Node_ClassDynamicCast_AsB_Ranged_Generic;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Is_Creative_Mode_ReturnValue = CallFunc_Is_Creative_Mode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetVolumeManager_OutVolumeManager = CallFunc_GetVolumeManager_OutVolumeManager;
	Parms.CallFunc_GetVolumeManager_OutIsValid = CallFunc_GetVolumeManager_OutIsValid;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetVolumeForLocation_ReturnValue = CallFunc_GetVolumeForLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetEquippedMusicPack_ReturnValue = CallFunc_GetEquippedMusicPack_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetVictoryStinger_ReturnValue = CallFunc_GetVictoryStinger_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_2 = CallFunc_SpawnSound2D_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "PawnPossessedDispatcher__DelegateSignature");

	Params::AAthena_PlayerController_C_PawnPossessedDispatcher__DelegateSignature_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


