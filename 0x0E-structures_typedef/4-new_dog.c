#include "dog.h"


void *_strcpy(char *strn, char *stro, dog_t *dog);
int _strlen(char *str);


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
void *ret;

my_dog = malloc(sizeof(dog_t));

if (my_dog == NULL)
return (NULL);

ret = _strcpy(name, owner, my_dog);

if (ret == NULL)
{
free(my_dog);
return (NULL);
}

my_dog->name = name;
my_dog->age = age;
my_dog->owner = owner;

return (my_dog);


}

/**
* _strcpy - copy string to heap.
*
* @strn: dog name .
* @stro: owner name .
* @dog: pointer to struct dog .
*
* Return: just to check if allocation failed . null = falied .
*
*/

void *_strcpy(char *strn, char *stro, dog_t *dog)
{

int strNlen = _strlen(strn);
int strOlen = _strlen(stro);

dog->name = malloc(sizeof(char) * strNlen + ENDBYTE);

if (dog->name == NULL)
return (NULL);

dog->owner = malloc(sizeof(char) * strOlen + ENDBYTE);

if (dog->owner == NULL)
return (NULL);

return (dog);
}

/**
* _strlen - count the length of string.
*
* @str: string input.
*
* Return: len of string in bytes.
*/
int _strlen(char *str)
{
int i = 0;

while (str[i] != '\0')
{
i++;
}
return (i);
}
