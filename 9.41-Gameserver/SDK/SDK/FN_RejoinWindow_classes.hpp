#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x391 - 0x328)
// WidgetBlueprintGeneratedClass RejoinWindow.RejoinWindow_C
class URejoinWindow_C : public UFortRejoinWindowBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      AutorejoinText;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ButtonBox;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Description;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnRequestAbandon;                                  // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnRequestRejoinRetry;                              // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDataTableRowHandle>           Buttons;                                           // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FMargin                               ButtonPadding;                                     // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InitialScreen;                                     // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class URejoinWindow_C* GetDefaultObj();

	void OnButtonClicked(class UCommonButton* Button, const struct FDataTableRowHandle& CallFunc_GetInputAction_InputActionRow, bool CallFunc_GetInputAction_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void CenterFirstButton(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue);
	void InitializeRejoinWindow(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UIconTextButton_C* CallFunc_Create_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ShowInitalScreen(float TimeoutSeconds, float LocalTimeoutSeconds, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array);
	void ShowRetryScreen(class FText Failure, float TimeoutSeconds, bool AllowRetry, bool LocalAllowRetry, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Add_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void Construct();
	void OnTimeoutTimeReached();
	void ExecuteUbergraph_RejoinWindow(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FMcpBanInfo& CallFunc_GetBanInfo_ReturnValue, bool CallFunc_IsUserCurrentlyBanned_ReturnValue);
	void OnRequestRejoinRetry__DelegateSignature();
	void OnRequestAbandon__DelegateSignature();
};

}


