/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/


#ifndef APPENGINE_CONTAINER_H
#define APPENGINE_CONTAINER_H 


/*------------------ types -------------------*/ 

typedef enum appEngine_objectType
{
	text,
	figure,
	container
	// ... add the objects that can be in a container
}AE_objectType;



// constraints measurements are relative to the container containing the object
typedef struct appEngine_constraintsOnSize 
{
	AE_measurementMethod type;
	AE_measurements height;
	AE_measurements width;
}AE_constraintsOnSize;

typedef struct appEngine_constraintsOnPosition 
{
	AE_measurementMethod type;
	AE_measurements marginLeft; // marginLeft is calculated from the leftmost point of the considered object
	AE_measurements marginRight; // ... from the rightmost point ...
	AE_measurements marginTop; // ...
	AE_measurements marginBot; // ...
}AE_constraintsOnPosition;

typedef struct appEngine_constraints 
{
	AE_constraintsOnPosition position;
	AE_constraintsOnSize size;
}AE_constraints;

typedef struct appEngine_containerElement 
{
	void *elementContent;
	AE_objectType elementType;
	AE_container *parent;
	AE_constraints elementConstraints;
	AE_figure elementBorders;
}AE_containerElement;

typedef struct appEngine_container 
{
	AE_containerElement **elements;
}AE_container;


#endif