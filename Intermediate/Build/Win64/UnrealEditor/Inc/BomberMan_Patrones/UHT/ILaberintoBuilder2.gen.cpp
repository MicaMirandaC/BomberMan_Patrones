// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/ILaberintoBuilder2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILaberintoBuilder2() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_UILaberintoBuilder2();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_UILaberintoBuilder2_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Interface UILaberintoBuilder2
void UILaberintoBuilder2::StaticRegisterNativesUILaberintoBuilder2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UILaberintoBuilder2);
UClass* Z_Construct_UClass_UILaberintoBuilder2_NoRegister()
{
	return UILaberintoBuilder2::StaticClass();
}
struct Z_Construct_UClass_UILaberintoBuilder2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ILaberintoBuilder2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IILaberintoBuilder2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UILaberintoBuilder2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UILaberintoBuilder2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UILaberintoBuilder2_Statics::ClassParams = {
	&UILaberintoBuilder2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UILaberintoBuilder2_Statics::Class_MetaDataParams), Z_Construct_UClass_UILaberintoBuilder2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UILaberintoBuilder2()
{
	if (!Z_Registration_Info_UClass_UILaberintoBuilder2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UILaberintoBuilder2.OuterSingleton, Z_Construct_UClass_UILaberintoBuilder2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UILaberintoBuilder2.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<UILaberintoBuilder2>()
{
	return UILaberintoBuilder2::StaticClass();
}
UILaberintoBuilder2::UILaberintoBuilder2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UILaberintoBuilder2);
UILaberintoBuilder2::~UILaberintoBuilder2() {}
// End Interface UILaberintoBuilder2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_ILaberintoBuilder2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UILaberintoBuilder2, UILaberintoBuilder2::StaticClass, TEXT("UILaberintoBuilder2"), &Z_Registration_Info_UClass_UILaberintoBuilder2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UILaberintoBuilder2), 3206020561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_ILaberintoBuilder2_h_6886587(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_ILaberintoBuilder2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_ILaberintoBuilder2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
