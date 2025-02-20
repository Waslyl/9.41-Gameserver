#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x164C (0x1AAC - 0x460)
// AnimBlueprintGeneratedClass SK_Weapon_Flotation_Balloon_Skeleton_AnimBP.SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C
class USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance_Balloons
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_84DBDC5E48D5C47BF629D8899BCA1531; // 0x468(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_2D7BF4A847530D38E2D24285CC0D9B49; // 0x498(0x140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1870934749976874408594AE24405264; // 0x5D8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_17811BD8492A719214EC19AD77BD6A29; // 0x5F8(0x20)(None)
	uint8                                        Pad_B04[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_7B57FE4C487DC6F9E32018A7A0DBA84B; // 0x620(0x1B0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3B803E214CCD9CFCB5B5D09DB5A8B420; // 0x7D0(0x108)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_A2B0CFAC4A512F3CE1A066B8890AFC5B; // 0x8D8(0x128)(None)
	struct FAnimNode_Trail                       AnimGraphNode_Trail_4DD306434D40186579746DBD80665345; // 0xA00(0x270)(None)
	struct FAnimNode_Trail                       AnimGraphNode_Trail_2CCCBB504F632B056034CBB56B083AA2; // 0xC70(0x270)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_40EBC9F7420C7D18FB3EF7873680C297; // 0xEE0(0xA0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_157C98D64BBFEB3B2713659127F338F5; // 0xF80(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B6845B6B4E05D127D3B50BAE95CB9651; // 0xFA0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3C924AAB4C8942759DF77CB84A5B5A9C; // 0xFC0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B72076124E994973DD23829C04501A7B; // 0xFE0(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_AA5FA2D545EFB06B01EE68A8F361C4FF; // 0x1000(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_86F3EF14439003F0433E6FBB7150E2D7; // 0x10B8(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_735F27DB4774461703675DB46108F113; // 0x10E0(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_BAF0B5704E7664BD4ADF328321D7937B; // 0x1100(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6F2E049C465694CA22BCE899606D45EC; // 0x1128(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_B7279996438367D62FB9FC859BD808DD; // 0x1148(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_F27645FB40386CDEAAAFE09B3365281B; // 0x1250(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_50FCD6544C176C6E4B22FFB88DA0089B; // 0x1358(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_FFAF414B429EAC8E724CF089020CB32E; // 0x1460(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_96616767415FC8DD6033C1BADDBB11AD; // 0x1568(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6261FF3E4C9A2F7C13F89493995D01DC; // 0x1670(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8A6318634970B2D5A10DEAAA53CD44D6; // 0x1778(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_20E2ABA4445A43AE921AC893C5EDD267; // 0x1880(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_D0E5B2AD4DD6104F9CE9EA9712442D74; // 0x1988(0x108)(None)
	struct FRotator                              Head_corrective_rotation;                          // 0x1A90(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Headback_pose_alpha;                               // 0x1A9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SocketUpVector;                                    // 0x1AA0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP(int32 EntryPoint, const struct FRotator& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FRotator& Temp_struct_Variable_1, const struct FRotator& Temp_struct_Variable_2, float K2Node_Event_DeltaTimeX, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& K2Node_Select_Default, const struct FTransform& CallFunc_GetDeltaTransformFromRefPose_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_MapRangeClamped_ReturnValue);
};

}


