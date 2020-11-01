// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayableCharacter.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
APlayableCharacter::APlayableCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;
	InDialogue = false;
}

// Called when the game starts or when spawned
void APlayableCharacter::BeginPlay()
{
	Super::BeginPlay();

}

void APlayableCharacter::MoveForward(float Value)
{
	if (!InDialogue) 
	{
		if ((Controller) && (Value != 0.0f))
		{
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);

			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			AddMovementInput(Direction, Value);
		}
		ForwardAxisValue = Value;
	}
}

void APlayableCharacter::MoveRight(float Value)
{
	if (!InDialogue) 
	{
		if ((Controller) && (Value != 0.0f))
		{
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);

			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			AddMovementInput(Direction, Value);
		}
		RightAxisValue = Value;
	}
}

void APlayableCharacter::LookRight(float Value)
{
	if (!InDialogue) 
	{
		YawAxisValue = Value;
		AddControllerYawInput(Value * BaseTurnRate * GetWorld()->GetDeltaSeconds());
	}
}

void APlayableCharacter::LookUp(float Value)
{
	if (!InDialogue) 
	{
		AddControllerPitchInput(Value * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
	}
}

// Called every frame
void APlayableCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayableCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayableCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APlayableCharacter::LookRight);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayableCharacter::LookUp);
}

bool APlayableCharacter::InDialogueGetter()
{
	return InDialogue;
}

void APlayableCharacter::InDialogueSetter(bool dia)
{
	InDialogue = dia;
}

float APlayableCharacter::BaseTurnGetter()
{
	return BaseTurnRate;
}

float APlayableCharacter::BaseLookUpGetter()
{
	return BaseLookUpRate;
}

void APlayableCharacter::BaseTurnSetter(float value)
{
	BaseTurnRate = value;
}

void APlayableCharacter::BaseLookUpSetter(float value)
{
	BaseLookUpRate = value;
}
