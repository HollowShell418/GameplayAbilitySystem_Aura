// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraCharacterBase.h"


AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), TEXT("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

