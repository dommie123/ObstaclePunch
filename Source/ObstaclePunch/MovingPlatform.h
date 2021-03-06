// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEPUNCH_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// UPROPERTY(EditAnywhere)
	// FVector platformPosition;

	UPROPERTY(EditAnywhere, Category="Movement")
	float moveDistance;

	UPROPERTY(EditAnywhere, Category="Movement")
	FVector platformVelocity;

	UPROPERTY(EditAnywhere, Category="Movement")
	float distFromStart;

	UPROPERTY(EditAnywhere, Category="Rotation")
	FRotator angularVelocity;

	FVector startPosition;

	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
	bool ShouldPlatformReturn() const;
	float GetDistanceMoved() const;
};
