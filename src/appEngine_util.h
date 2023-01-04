#ifndef APPENGINE_UTIL_H
#define APPENGINE_UTIL_H

#define DEFINE_ENUM_WITH_TOKENS(name,...) 	 \
	enum name   		 					 \
	{									 	 \
		__VA_ARGS__							 \
	}; 

#define DEFINE_TYPEDEF(originalType, alias) typedef originalType alias;

#endif