#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xBB8 - 0xB40)
// WidgetBlueprintGeneratedClass AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C
class UAthenaMatchmakingModeButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ConfirmSelection;                                  // 0xB48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionFlash;                             // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionShine;                             // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FillSettingText;                                   // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GameModeGlow;                                      // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GameModeIcon;                                      // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      GameModeName;                                      // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               IconSpacer;                                        // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LimitedMatchmakingHB;                              // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LTMModeSubIcon;                                    // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SubGameModeName;                                   // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SubGameModeNameHB;                                 // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         FillSquad;                                         // 0xBA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlaylistAthena*                   PlaylistData;                                      // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaMatchmakingModeButton_C* GetDefaultObj();

	void RefreshLimitedPoolWarning(bool IsCrossplayEnabled, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshFillText(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetMatchmakingFillText_ReturnValue);
	void SetSquadFillText(bool bFill);
	void PlaylistChanged(class UFortPlaylistAthena* NewPlaylist, class FText OverrideName, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_3, class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsCrossplayEnabled_ReturnValue, class FText K2Node_Select_Default_3, class FText CallFunc_TextToUpper_ReturnValue_1);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void ExecuteUbergraph_AthenaMatchmakingModeButton(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue);
};

}


