#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0xB9C - 0xB40)
// WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C
class UItemCardWidget_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Show;                                              // 0xB48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                FortMultiSizeItemCard_0;                           // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnHoveredEvent;                                    // 0xB58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFortReceivedItemLootInfo             ItemReceivedInfo_BP;                               // 0xB68(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USoundBase*                            SoundOnItemCardShow;                               // 0xB90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cscs;                                              // 0xB98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemCardWidget_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void OnCentered();
	void PlayShow(int32 Idx);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BP_OnHovered();
	void Construct();
	void ExecuteUbergraph_ItemCardWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 K2Node_CustomEvent_Idx, bool CallFunc_Less_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void OnHoveredEvent__DelegateSignature(const struct FFortReceivedItemLootInfo& NewParam);
};

}


