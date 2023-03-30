#include "main.h"


/**
* reverse_array - reverses an array of size n of intigers .
* @a: is a pointer to array of integers .
* @n: is the size of the array of integers .
*
*/

void reverse_array(int *a, int n)
{
int tmp;
int i = 0;
n = n - 1;
while (i <= n)
{
tmp = a[i];
a[i++] = a[n];
a[n--] = tmp;
}
}
