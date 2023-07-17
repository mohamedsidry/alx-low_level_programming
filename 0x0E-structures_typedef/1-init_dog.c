
#include "dog.h"
/**
* init_dog - initialize struct .
*
* @d: pointer to struct dog .
* @name: the name of the dog .
* @age: the age of the dog .
* @owner: the name of the owner of the dog .
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;

}
