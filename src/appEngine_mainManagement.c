/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/

#include <stdlib.h>
#include <stdbool.h>
#include "appEngine_mainManagement.h"
#include "appEngine_externals.h"

static AE_ActiveRessourcesList AE_GlobalRessources;

void AE_InitGlobalRessources() // has to be executed only one time
{
	AE_GlobalRessources.firstElement = NULL;
}

static bool AE_GlobalIsEmpty()
{
	if (AE_GlobalRessources.firstElement == NULL) return true;
	else return false;
}

int AE_DeclareActiveRessource(void *ptRessource, AE_ActiveRessourceType ressourceType)
{
	if (ptRessource == NULL)
	{
		return -1;
	}
	else if (AE_GlobalIsEmpty())
	{
		AE_GlobalRessources.firstElement = (AE_ActiveRessource*) malloc(sizeof(AE_ActiveRessource));
		if (AE_GlobalRessources.firstElement == NULL)
		{
			return 1;
		}
		else
		{
			AE_GlobalRessources.firstElement->this = ptRessource;
			AE_GlobalRessources.firstElement->type = ressourceType;
			AE_GlobalRessources.firstElement->nextElement = NULL;
			return 0;
		}
		
	}
	else
	{
		AE_ActiveRessource *last = AE_SearchLastGlobalRessource();
		last->nextElement = (AE_ActiveRessource*) malloc(sizeof(AE_ActiveRessource));
		if (last->nextElement == NULL)
		{
			return 1;
		}
		else
		{
			last->nextElement->this = ptRessource;
			last->nextElement->type = ressourceType;
			last->nextElement->nextElement = NULL;
			return 0;
		}
		
	}
}

static AE_ActiveRessource *AE_SearchLastGlobalRessource()
{
	if (AE_GlobalIsEmpty())
	{
		return NULL;
	}
	else
	{
		AE_ActiveRessource *returned = AE_GlobalRessources.firstElement;
		while(returned->nextElement != NULL)
		{
			returned = returned->nextElement;
		}
		return returned;
	}
}