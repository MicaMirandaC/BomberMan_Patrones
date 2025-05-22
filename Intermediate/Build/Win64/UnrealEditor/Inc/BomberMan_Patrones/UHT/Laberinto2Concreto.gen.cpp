// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/Laberinto2Concreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberinto2Concreto() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ALaberinto2Concreto();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ALaberinto2Concreto_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Class ALaberinto2Concreto
void ALaberinto2Concreto::StaticRegisterNativesALaberinto2Concreto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberinto2Concreto);
UClass* Z_Construct_UClass_ALaberinto2Concreto_NoRegister()
{
	return ALaberinto2Concreto::StaticClass();
}
struct Z_Construct_UClass_ALaberinto2Concreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Laberinto2Concreto.h" },
		{ "ModuleRelativePath", "Public/Laberinto2Concreto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberinto2Concreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaberinto2Concreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto2Concreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberinto2Concreto_Statics::ClassParams = {
	&ALaberinto2Concreto::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto2Concreto_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberinto2Concreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberinto2Concreto()
{
	if (!Z_Registration_Info_UClass_ALaberinto2Concreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberinto2Concreto.OuterSingleton, Z_Construct_UClass_ALaberinto2Concreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberinto2Concreto.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<ALaberinto2Concreto>()
{
	return ALaberinto2Concreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberinto2Concreto);
ALaberinto2Concreto::~ALaberinto2Concreto() {}
// End Class ALaberinto2Concreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Laberinto2Concreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberinto2Concreto, ALaberinto2Concreto::StaticClass, TEXT("ALaberinto2Concreto"), &Z_Registration_Info_UClass_ALaberinto2Concreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberinto2Concreto), 3172848852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Laberinto2Concreto_h_2766580970(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Laberinto2Concreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_Laberinto2Concreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
