#include "main.h"


void *mem_alloc(unsigned int elem, unsigned int size);
void mem_init(char *ptr, unsigned int elem);


/**
* _calloc - allocate an array in heap .
*
* @nmemb: number of elements.
* @size: size of each element.
*
* Return: pointer to type of your chooise .
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{

void *ptr;

if (nmemb == 0 || size == 0)
return (0);

ptr = mem_alloc(nmemb, size);

if (ptr == NULL)
return (NULL);

mem_init(ptr, nmemb);

return (ptr);

}

/**
* mem_alloc - allocate memory .
*
* @elem: number of elements.
* @size: size of each element .
*
* Return: pointer of your choise .
*
*/

void *mem_alloc(unsigned int elem, unsigned int size)
{

void *ptr;


ptr = malloc(size * elem);
if (ptr == NULL)
return (NULL);

return (ptr);

}

/**
* mem_init - initialize the array to value from main.h (MACROS).
*
* @ptr: pointer to allocated space.
* @elem: number of elems in the array .
* Return: void .
*/

void mem_init(char *ptr, unsigned int elem)
{

unsigned int i;

for (i = 0; i < elem; i++)
{

ptr[i] = INITVALUE;

}

}
