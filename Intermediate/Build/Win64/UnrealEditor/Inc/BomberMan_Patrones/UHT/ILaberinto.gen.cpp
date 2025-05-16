// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/ILaberinto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILaberinto() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_UILaberinto();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_UILaberinto_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Interface UILaberinto
void UILaberinto::StaticRegisterNativesUILaberinto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UILaberinto);
UClass* Z_Construct_UClass_UILaberinto_NoRegister()
{
	return UILaberinto::StaticClass();
}
struct Z_Construct_UClass_UILaberinto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ILaberinto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IILaberinto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UILaberinto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UILaberinto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UILaberinto_Statics::ClassParams = {
	&UILaberinto::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UILaberinto_Statics::Class_MetaDataParams), Z_Construct_UClass_UILaberinto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UILaberinto()
{
	if (!Z_Registration_Info_UClass_UILaberinto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UILaberinto.OuterSingleton, Z_Construct_UClass_UILaberinto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UILaberinto.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<UILaberinto>()
{
	return UILaberinto::StaticClass();
}
UILaberinto::UILaberinto(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UILaberinto);
UILaberinto::~UILaberinto() {}
// End Interface UILaberinto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_ILaberinto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UILaberinto, UILaberinto::StaticClass, TEXT("UILaberinto"), &Z_Registration_Info_UClass_UILaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UILaberinto), 49642062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_ILaberinto_h_1915892394(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_ILaberinto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_ILaberinto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
