// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayer.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "MotionControllerComponent.h"
#include "Engine/GameEngine.h"

// Sets default values
ABasePlayer::ABasePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	RootComponent = Mesh;
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);
	
}

// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();

	TArray<UMotionControllerComponent*> comps;

	UMotionControllerComponent* leftHand;
	UMotionControllerComponent* rightHand;

	this->GetComponents(comps);
	for (UMotionControllerComponent* motionController : comps)
	{
		if (motionController->Hand == EControllerHand::Left) {
			leftHand = motionController;
		}
		else if (motionController->Hand == EControllerHand::Right) {
			rightHand = motionController;
		}
	}
}

// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



