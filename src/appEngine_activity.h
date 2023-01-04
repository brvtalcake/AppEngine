/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/


#ifndef APPENGINE_ACTIVITY_H
#define APPENGINE_ACTIVITY_H 


/*------------------ types -------------------*/ 

typedef struct AppEngine_Activity 
{
	char *name;
	SDL_Window *activityMainWindow;
	SDL_Renderer *activityMainRenderer;
	AE_Container *activityMainContainer;
}AE_Activity;



#endif