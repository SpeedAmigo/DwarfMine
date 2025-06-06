// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPcg.h"

// Sets default values
AMyPcg::AMyPcg()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPcg::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPcg::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

