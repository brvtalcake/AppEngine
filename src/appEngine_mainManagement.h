/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/


#ifndef APPENGINE_MAINMANAGEMENT_H
#define APPENGINE_MAINMANAGEMENT_H 

#include <stdbool.h>
#include "appEngine_util.h"

/*----------------- macros -------------------*/
#define AE_BASE_RESSOURCE_TYPES() \
	AE_Activity, 				  \
	AE_Container,				  \
	AE_ContainerElement,		  \
	AE_Figure,					  \
	//add something here 		  \
	SDL_Window, 				  \
	SDL_Renderer, 				  \
	TTF_Font,                     \
	SDL_Surface,                  \
	SDL_Texture, 	


/*------------------ types -------------------*/

// error management
DEFINE_ENUM_WITH_TOKENS(AE_ActiveRessourceType, AE_BASE_RESSOURCE_TYPES());
DEFINE_TYPEDEF(enum AE_ActiveRessourceType, AE_ActiveRessourceType);

typedef struct AppEngine_ActiveRessource 
{
	void *this;
	AE_ActiveRessourceType type;
	struct AppEngine_ActiveRessources *nextElement;
}AE_ActiveRessource;

typedef struct AppEngine_ActiveRessourcesList 
{
	AE_ActiveRessource *firstElement;
}AE_ActiveRessourcesList;


/*------------------ global variables -------------------*/

extern bool AE_ProgramLaunched;


/*------------------ functions -------------------*/

int AE_DeclareActiveRessource(void *ptRessource, AE_ActiveRessourceType ressourceType);
/* 
	The function below will quit the SDL program safely by dealocating ressources to avoid memory leaks
*/
void AE_ExitWithError(char *message, AE_ActiveRessourcesList *list);



#endif