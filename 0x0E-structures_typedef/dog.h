#ifndef DOG_H
#define DOG_H

/*** STANDARD LIBRARY ***/

#include <stdlib.h>



/**
* struct dog - is a new data type.
*
* @name: name of the dog.
* @age: the age of the dog .
* @owner: the name of the owner .
*
*
*/

struct dog
{
char *name;
float age;
char *owner;
};

/** FUNCTION PROTOTYPES  **/

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /*** DOG_H ***/
