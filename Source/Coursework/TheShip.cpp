// Fill out your copyright notice in the Description page of Project Settings.

#include "Coursework.h"
#include "TheShip.h"


// Sets default values
ATheShip::ATheShip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATheShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATheShip::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	if (!(move))
	{
	//turn off sail
	}
	else
	{
	//turn on sail
	}
}

