// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHILOSOPHYPROJECT_PlayableCharacter_generated_h
#error "PlayableCharacter.generated.h already included, missing '#pragma once' in PlayableCharacter.h"
#endif
#define PHILOSOPHYPROJECT_PlayableCharacter_generated_h

#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_SPARSE_DATA
#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_RPC_WRAPPERS
#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayableCharacter(); \
	friend struct Z_Construct_UClass_APlayableCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayableCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhilosophyProject"), NO_API) \
	DECLARE_SERIALIZER(APlayableCharacter)


#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayableCharacter(); \
	friend struct Z_Construct_UClass_APlayableCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayableCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhilosophyProject"), NO_API) \
	DECLARE_SERIALIZER(APlayableCharacter)


#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayableCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayableCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayableCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayableCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayableCharacter(APlayableCharacter&&); \
	NO_API APlayableCharacter(const APlayableCharacter&); \
public:


#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayableCharacter(APlayableCharacter&&); \
	NO_API APlayableCharacter(const APlayableCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayableCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayableCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayableCharacter)


#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(APlayableCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(APlayableCharacter, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__ForwardAxisValue() { return STRUCT_OFFSET(APlayableCharacter, ForwardAxisValue); } \
	FORCEINLINE static uint32 __PPO__RightAxisValue() { return STRUCT_OFFSET(APlayableCharacter, RightAxisValue); } \
	FORCEINLINE static uint32 __PPO__YawAxisValue() { return STRUCT_OFFSET(APlayableCharacter, YawAxisValue); }


#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_13_PROLOG
#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_SPARSE_DATA \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_RPC_WRAPPERS \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_INCLASS \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_SPARSE_DATA \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_INCLASS_NO_PURE_DECLS \
	Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHILOSOPHYPROJECT_API UClass* StaticClass<class APlayableCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Philosophy_Game_Source_PhilosophyProject_Entities_PlayableCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
