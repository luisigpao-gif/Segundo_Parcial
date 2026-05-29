// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaEnemigoNave(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	// Create the mesh component
	mallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = mallaEnemigo;
	mallaEnemigo->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	//	RootComponent = EsqueletoNave.Object;
	mallaEnemigo->SetStaticMesh(MallaEnemigoNave.Object);
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Método para que alguien se anote en la lista
void AEnemigo::Suscribir(IObserver* Observador)
{
	if (Observador != nullptr)
	{
		Observadores.Add(Observador);
	}
}

// Método que se llama cuando el enemigo es destruido
void AEnemigo::Morir()
{
	// 1. Recorremos la lista y le avisamos a cada uno que hemos muerto
	for (IObserver* Obs : Observadores)
	{
		if (Obs != nullptr)
		{
			Obs->OnNotify(); // ¡Gritamos la notificación!
		}
	}

	// 2. Destruimos al actor de Unreal
	Destroy();
}