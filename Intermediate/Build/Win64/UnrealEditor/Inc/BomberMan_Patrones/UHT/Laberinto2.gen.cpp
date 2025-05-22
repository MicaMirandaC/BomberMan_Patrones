// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/Laberinto2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberinto2() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ALaberinto2();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ALaberinto2_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Class ALaberinto2
void ALaberinto2::StaticRegisterNativesALaberinto2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberinto2);
UClass* Z_Construct_UClass_ALaberinto2_NoRegister()
{
	return ALaberinto2::StaticClass();
}
struct Z_Construct_UClass_ALaberinto2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Laberinto2.h" },
		{ "ModuleRelativePath", "Public/Laberinto2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberinto2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaberinto2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberinto2_Statics::ClassParams = {
	&ALaberinto2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto2_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberinto2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberinto2()
{
	if (!Z_Registration_Info_UClass_ALaberinto2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberinto2.OuterSingleton, Z_Construct_UClass_ALaberinto2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberinto2.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<ALaberinto2>()
{
	return ALaberinto2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberinto2);
ALaberinto2::~ALaberinto2() {}
// End Class ALaberinto2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Laberinto2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberinto2, ALaberinto2::StaticClass, TEXT("ALaberinto2"), &Z_Registration_Info_UClass_ALaberinto2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberinto2), 2221493841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Laberinto2_h_4205396082(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Laberinto2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Laberinto2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
