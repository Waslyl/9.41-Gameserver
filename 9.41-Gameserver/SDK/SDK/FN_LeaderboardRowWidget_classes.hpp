#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xB70 - 0xB50)
// WidgetBlueprintGeneratedClass LeaderboardRowWidget.LeaderboardRowWidget_C
class ULeaderboardRowWidget_C : public UFortLeaderboardEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Rank;                                              // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StatValue;                                         // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      User;                                              // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULeaderboardRowWidget_C* GetDefaultObj();

	void Refresh(class UFortLeaderboardRowProxyInstance* RowObject, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
	void SetDataDirect(class UFortLeaderboardRowProxyInstance* NewData);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_LeaderboardRowWidget(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, class UFortLeaderboardRowProxyInstance* K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


