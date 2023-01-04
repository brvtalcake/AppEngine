/*
	Developed by Axel PASCON, a.k.a. brvtalcake 
*/


#ifndef APPENGINE_GEOMETRY_H
#define APPENGINE_GEOMETRY_H 


/*------------------ types -------------------*/ 

typedef union AppEngine_Measurements 
{
	float relative;
	int absolute;
}AE_Measurements;

typedef enum AppEngine_MeasurementMethod 
{
	relative,
	absolute
}AE_MeasurementMethod;


#endif