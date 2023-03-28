#include "main.h"


/**
* print_array - prints values in the array followed by comma .
* @a: pointer to the array .
* @n: the length of the array .
*/



void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
if (a != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
