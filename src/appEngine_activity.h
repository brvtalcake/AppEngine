/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/


#ifndef APPENGINE_ACTIVITY_H
#define APPENGINE_ACTIVITY_H 


/*------------------ types -------------------*/ 

typedef struct appEngine_activity 
{
	char *name;
	SDL_Window *activityMainWindow;
	SDL_Renderer *activityMainRenderer;
	AE_container *activityMainContainer;
}AE_activity;



#endif