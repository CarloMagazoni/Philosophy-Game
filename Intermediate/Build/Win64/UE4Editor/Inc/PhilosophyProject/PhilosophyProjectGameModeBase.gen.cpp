// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhilosophyProject/PhilosophyProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhilosophyProjectGameModeBase() {}
// Cross Module References
	PHILOSOPHYPROJECT_API UClass* Z_Construct_UClass_APhilosophyProjectGameModeBase_NoRegister();
	PHILOSOPHYPROJECT_API UClass* Z_Construct_UClass_APhilosophyProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PhilosophyProject();
// End Cross Module References
	void APhilosophyProjectGameModeBase::StaticRegisterNativesAPhilosophyProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APhilosophyProjectGameModeBase_NoRegister()
	{
		return APhilosophyProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APhilosophyProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhilosophyProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PhilosophyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhilosophyProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PhilosophyProjectGameModeBase.h" },
		{ "ModuleRelativePath", "PhilosophyProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhilosophyProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhilosophyProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhilosophyProjectGameModeBase_Statics::ClassParams = {
		&APhilosophyProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APhilosophyProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhilosophyProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhilosophyProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhilosophyProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhilosophyProjectGameModeBase, 2484568229);
	template<> PHILOSOPHYPROJECT_API UClass* StaticClass<APhilosophyProjectGameModeBase>()
	{
		return APhilosophyProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhilosophyProjectGameModeBase(Z_Construct_UClass_APhilosophyProjectGameModeBase, &APhilosophyProjectGameModeBase::StaticClass, TEXT("/Script/PhilosophyProject"), TEXT("APhilosophyProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhilosophyProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
