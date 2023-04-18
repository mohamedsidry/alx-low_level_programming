#ifndef DOG_H
#define DOG_H

/**
* struct dog- struct represent the a dog has name age and owner.
*
*@name: the name of the dog .
*@age: the age of the dog .
*@owner: the name of the owner .
*
*/

typedef struct dog
{
char *name;
float age;
char *owner;

} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

