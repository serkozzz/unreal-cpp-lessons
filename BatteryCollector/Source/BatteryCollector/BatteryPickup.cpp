// Fill out your copyright notice in the Description page of Project Settings.

//#include <string>

#include "BatteryCollector.h"
#include "BatteryPickup.h"



ABatteryPickup::ABatteryPickup()
{
	UStaticMeshComponent* mesh = GetMesh();
	if (mesh == nullptr)
	{ 
		UE_LOG(LogTemp, Warning, TEXT("mesh is null"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("mesh is not null"));
	}

	GetMesh()->SetSimulatePhysics(true);
}
