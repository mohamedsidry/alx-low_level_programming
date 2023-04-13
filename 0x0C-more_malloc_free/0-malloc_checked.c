#include <stdlib.h>
#include "main.h"




/**
* malloc_checked- allocate memory in heap  of size of b.
* @b: size of bytes to allocate .
* Return: pointer to the new allocated speace .
* return 98 if it is null .
*/


void *malloc_checked(unsigned int b)
{
void *pointer;

pointer = malloc(b);

if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
