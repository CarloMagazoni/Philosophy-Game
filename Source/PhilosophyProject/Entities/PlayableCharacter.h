// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayableCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;

UCLASS()
class PHILOSOPHYPROJECT_API APlayableCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayableCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	UStaticMeshComponent* HairMeshComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookRight(float Value);
	void LookUp(float Value);

	UFUNCTION(BlueprintGetter)
	bool InDialogueGetter();

	UFUNCTION(BlueprintSetter)
	void InDialogueSetter(bool dia);

	UFUNCTION(BlueprintGetter)
	float BaseTurnGetter();

	UFUNCTION(BlueprintSetter)
	void BaseTurnSetter(float value);

	UFUNCTION(BlueprintGetter)
	float BaseLookUpGetter();

	UFUNCTION(BlueprintSetter)
	void BaseLookUpSetter(float value);


	UPROPERTY(BlueprintGetter = BaseTurnGetter, BlueprintSetter = BaseTurnSetter, Category = "Camera")
	float BaseTurnRate;
	UPROPERTY(BlueprintGetter = BaseLookUpGetter, BlueprintSetter = BaseLookUpSetter, Category = "Camera")
	float BaseLookUpRate;
	UPROPERTY(BlueprintReadOnly)
	float ForwardAxisValue;
	UPROPERTY(BlueprintReadOnly)
	float RightAxisValue;
	UPROPERTY(BlueprintReadOnly)
	float YawAxisValue;
	UPROPERTY(BlueprintReadWrite, BlueprintGetter = InDialogueGetter, BlueprintSetter = InDialogueSetter)
	bool InDialogue;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
