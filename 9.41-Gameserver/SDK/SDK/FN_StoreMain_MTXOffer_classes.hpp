#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0xC29 - 0xB70)
// WidgetBlueprintGeneratedClass StoreMain_MTXOffer.StoreMain_MTXOffer_C
class UStoreMain_MTXOffer_C : public UFortStoreFrontOfferWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0xB78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Embiggen;                                          // 0xB80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HighlightGlow_Founders;                            // 0xB88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HighlightGlow_VBuck;                               // 0xB90(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      GradientFade;                                      // 0xB98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOffer_SpecialBanner_C* AthenaDirectAcquisitionOffer_SpecialBanner;        // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BaseColor;                                         // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        BonusTextArea;                                     // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderAll;                                         // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BaseQuantity;                           // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BonusQuantity;                          // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KeyArt;                                            // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXCurrencyArea;                                   // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradient;                                   // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySalePrice;                                  // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpotHighlight;                                     // 0xBF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice;                             // 0xBF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferName;                                     // 0xC00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice;                                 // 0xC08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TileSize;                                          // 0xC10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            AboutToShowDetails;                                // 0xC18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         LargeTile;                                         // 0xC28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UStoreMain_MTXOffer_C* GetDefaultObj();

	void SetTileSize(bool Large);
	void TriggerReset();
	void InitialReset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void TriggerIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ShowDetails(bool CallFunc_IsMobileGame_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class UStoreMain_OfferDetails_C* CallFunc_Create_ReturnValue);
	void InitOffer(class FText BonusMTX, class FText BaseMtx, class UMaterial* OfferMaterial, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, const class FString& CallFunc_GetBannerOverrideTag_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, const struct FFortMtxGradient& CallFunc_GetGradient_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FLinearColor& CallFunc_GetBackground_ReturnValue, const struct FSlateBrush& CallFunc_GetTileImage_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_4, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_5, int32 CallFunc_GetTotalQuantity_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_GetName_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Construct();
	void OnClick(class UCommonButton* Button);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_StoreMain_MTXOffer(int32 EntryPoint, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void AboutToShowDetails__DelegateSignature();
};

}


