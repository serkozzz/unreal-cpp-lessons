// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"


UCLASS()
class BATTERYCOLLECTOR_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn; }

	UFUNCTION(BlueprintPure, Category = "Spawing")
	FVector GetRandomPointInVolume() const;

protected:

	UPROPERTY(EditAnywhere, Category = "Spawing")
	TSubclassOf<class APickup> WhatToSpawn;
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawing", meta = (AllowPrivateAcces = true) )
	class UBoxComponent* WhereToSpawn;

	void SpawnPickup();
	
};
