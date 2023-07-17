#include "dog.h"


void _strcpy(char *strtext, char *strheap);
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

my_dog = malloc(sizeof(dog_t));

if (my_dog == NULL)
return (NULL);

my_dog->name = malloc(sizeof(char) * _strlen(name) + ENDBYTE);
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}

my_dog->owner = malloc(sizeof(char) * _strlen(owner) + ENDBYTE);
if (my_dog->owner == NULL)
{
free(my_dog->name);
free(my_dog);
return (NULL);
}

_strcpy(name, my_dog->name);
_strcpy(owner, my_dog->owner);
my_dog->age = age;

return (my_dog);


}

/**
* _strcpy - copy string to heap.
*
* @strtext: sttring in  text section .
* @strheap: dynamic allocated string .
*
*/

void _strcpy(char *strtext, char *strheap)
{
int i = 0;
while (strtext[i] != '\0')
{
strheap[i] = strtext[i];
i++;
}

strheap[i] = strtext[i];
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
