#include <stdio.h>

/**
* print_to_98 - prints form inupt number (@n) to target (this case 98).
* @n:is the inupt to start from .
*/

void print_to_98(int n)
{
int target = 98;
if (n > target)
{
while (n > target)
{
printf("%d, ", n);
n--;
}
}
else
{
while (n < target)
{
printf("%d, ", n);
n++;
}
}
printf("98,\n");
}
