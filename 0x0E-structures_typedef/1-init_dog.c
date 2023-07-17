
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

struct dog *ptr = d;

ptr->name = name;
ptr->age = age;
ptr->owner = owner;

}
