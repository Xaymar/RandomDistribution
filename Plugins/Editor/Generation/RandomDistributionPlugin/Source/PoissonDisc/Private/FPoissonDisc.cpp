// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "PoissonDiscPrivatePCH.h"
#include "IPoissonDisc.h"


class FPoissonDisc : public IPoissonDisc
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FPoissonDisc, PoissonDisc )



void FPoissonDisc::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FPoissonDisc::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
