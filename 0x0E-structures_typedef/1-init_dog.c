#include <stdlib.h>
#include "dog.h"

/**
* init_dog - give the dog name age and owner .
* @d: pointer to structuer .
* @name: pointer to name address .
* @age:  age of dog .
* @owner: pointer to owner name address .
*
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d->name = name;
d->age = age;
d->owner = owner;


}
