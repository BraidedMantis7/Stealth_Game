// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SGObjectiveActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGObjectiveActor() {}
// Cross Module References
	STEALTHGAME_API UClass* Z_Construct_UClass_ASGObjectiveActor_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_ASGObjectiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
// End Cross Module References
	void ASGObjectiveActor::StaticRegisterNativesASGObjectiveActor()
	{
	}
	UClass* Z_Construct_UClass_ASGObjectiveActor_NoRegister()
	{
		return ASGObjectiveActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASGObjectiveActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_StealthGame();
			OuterClass = ASGObjectiveActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASGObjectiveActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SGObjectiveActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SGObjectiveActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGObjectiveActor, 1674689900);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGObjectiveActor(Z_Construct_UClass_ASGObjectiveActor, &ASGObjectiveActor::StaticClass, TEXT("/Script/StealthGame"), TEXT("ASGObjectiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGObjectiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
