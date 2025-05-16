// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Patrones/Public/LaberintoConcreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoConcreto() {}

// Begin Cross Module References
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ALaberintoConcreto();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_ALaberintoConcreto_NoRegister();
BOMBERMAN_PATRONES_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_Patrones();
// End Cross Module References

// Begin Class ALaberintoConcreto
void ALaberintoConcreto::StaticRegisterNativesALaberintoConcreto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoConcreto);
UClass* Z_Construct_UClass_ALaberintoConcreto_NoRegister()
{
	return ALaberintoConcreto::StaticClass();
}
struct Z_Construct_UClass_ALaberintoConcreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoConcreto.h" },
		{ "ModuleRelativePath", "Public/LaberintoConcreto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoConcreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaberintoConcreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Patrones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoConcreto_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoConcreto, IILaberintoBuilder), false },  // 720074489
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoConcreto_Statics::ClassParams = {
	&ALaberintoConcreto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoConcreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoConcreto()
{
	if (!Z_Registration_Info_UClass_ALaberintoConcreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoConcreto.OuterSingleton, Z_Construct_UClass_ALaberintoConcreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoConcreto.OuterSingleton;
}
template<> BOMBERMAN_PATRONES_API UClass* StaticClass<ALaberintoConcreto>()
{
	return ALaberintoConcreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoConcreto);
ALaberintoConcreto::~ALaberintoConcreto() {}
// End Class ALaberintoConcreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_LaberintoConcreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoConcreto, ALaberintoConcreto::StaticClass, TEXT("ALaberintoConcreto"), &Z_Registration_Info_UClass_ALaberintoConcreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoConcreto), 2395735001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_LaberintoConcreto_h_3961097345(TEXT("/Script/BomberMan_Patrones"),
	Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_LaberintoConcreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mica_Documents_Unreal_Projects_BomberMan_Patrones_Source_BomberMan_Patrones_Public_LaberintoConcreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
