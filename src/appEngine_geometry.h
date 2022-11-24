/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/


#ifndef APPENGINE_GEOMETRY_H
#define APPENGINE_GEOMETRY_H 


/*------------------ types -------------------*/ 

typedef union appEngine_measurements 
{
	float relative;
	int absolute;
}AE_measurements;

typedef enum appEngine_measurementMethod 
{
	relative,
	absolute
}AE_measurementMethod;


#endif