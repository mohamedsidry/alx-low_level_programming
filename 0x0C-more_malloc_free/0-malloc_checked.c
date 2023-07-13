#include "main.h"

/**
* malloc_checked - allocate memory exit with 89 in failier .
*
* @b: number of bytes to allocate .
*
* Return: pointer to array.
*/


void *malloc_checked(unsigned int b)
{

void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
exit(EX89);
}

return (ptr);

}
