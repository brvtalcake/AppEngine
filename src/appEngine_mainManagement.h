/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/


#ifndef APPENGINE_MAINMANAGEMENT_H
#define APPENGINE_MAINMANAGEMENT_H 


/*------------------ types -------------------*/

// error management
typedef enum appEngine_activeRessourceType 
{
	// related to AE
	activityContent,
	container,

	// related to SDL
	window,
	renderer,
	font,
	surface,
	texture
}AE_activeRessourceType;

typedef struct appEngine_activeRessource 
{
	void *content;
	AE_activeRessourceType type;
	struct appEngine_activeRessources *nextElement;
}AE_activeRessource;

typedef struct appEngine_activeRessourcesList 
{
	AE_activeRessource *firstElement;
}AE_activeRessourcesList;


/*------------------ global variables -------------------*/

extern bool AE_programLaunched;


/*------------------ functions -------------------*/

/* 
	The function below will quit SDL safely by dealocating ressources to avoid memory leaks
*/
void AE_ExitWithError(char *message, AE_activeRessourcesList *list);



#endif