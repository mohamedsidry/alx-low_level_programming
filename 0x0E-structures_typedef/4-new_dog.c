#include "dog.h"



/**
* new_dog - pointer to struct of type dog_t .
*
* @name: name of the dog .
* @age: age of the dog .
* @owner: the name of the owner .
*
* Return: pointer to a struct of type dog_t. Null of failer .
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;

my_dog = malloc(sizeof(dog_t));

if (my_dog == NULL)
return (NULL);

my_dog->name = name;
my_dog->age = age;
my_dog->owner = owner;

return (my_dog);


}
