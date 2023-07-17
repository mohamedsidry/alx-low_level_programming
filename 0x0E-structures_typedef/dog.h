#ifndef DOG_H
#define DOG_H

/*** STANDARD LIBRARY ***/

#include <stdlib.h>
#include <stdio.h>

/*** MACROS ***/

#define ENDBYTE 1

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
float age;
char *name;
char *owner;

};

typedef struct dog dog_t;

/** FUNCTION PROTOTYPES  **/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif /*** DOG_H ***/
