// Copyright Epic Games, Inc. All Rights Reserve

#include "NavesUSFX2026Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "Enemigo.h"


ANavesUSFX2026Projectile::ANavesUSFX2026Projectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &ANavesUSFX2026Projectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void ANavesUSFX2026Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Verificamos que chocamos con algo válido
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		// 1. Intentamos hacer un "Cast" a AEnemigo
		AEnemigo* EnemigoImpactado = Cast<AEnemigo>(OtherActor);

		// 2. Si el casteo es exitoso, significa que la bala golpeó a un enemigo
		if (EnemigoImpactado != nullptr)
		{
			// ¡AQUÍ OCURRE LA MAGIA DEL PATRÓN!
			// Al llamar a Morir(), el enemigo avisa al Gestor (OnNotify) y luego se destruye.
			EnemigoImpactado->Morir();
		}
		else if (OtherComp->IsSimulatingPhysics())
		{
			// Si no era un enemigo, pero era algo con físicas (como tus bloques), lo empuja (tu código original)
			OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
		}
	}

	// El proyectil se destruye al impactar contra cualquier cosa
	Destroy();
}