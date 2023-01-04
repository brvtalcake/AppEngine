/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/


#ifndef APPENGINE_CONTAINER_H
#define APPENGINE_CONTAINER_H 


/*------------------ types -------------------*/ 

typedef enum AppEngine_ObjectType
{
	text,
	figure,
	container
	// ... add the objects that can be in a container
}AE_ObjectType;



// constraints measurements are relative to the container containing the object
typedef struct AppEngine_ConstraintsOnSize 
{
	AE_MeasurementMethod type;
	AE_Measurements height;
	AE_Measurements width;
}AE_ConstraintsOnSize;

typedef struct AppEngine_ConstraintsOnPosition 
{
	AE_MeasurementMethod type;
	AE_Measurements marginLeft; // marginLeft is calculated from the leftmost point of the considered object
	AE_Measurements marginRight; // ... from the rightmost point ...
	AE_Measurements marginTop; // ...
	AE_Measurements marginBot; // ...
}AE_ConstraintsOnPosition;

typedef struct AppEngine_Constraints 
{
	AE_ConstraintsOnPosition position;
	AE_ConstraintsOnSize size;
}AE_Constraints;

typedef struct AppEngine_ContainerElement 
{
	void *elementContent;
	AE_ObjectType elementType;
	AE_Container *parent;
	AE_Constraints elementConstraints;
	AE_Figure *elementBorders;
}AE_ContainerElement;

typedef struct AppEngine_Container 
{
	AE_ContainerElement **elements;
}AE_Container;


#endif