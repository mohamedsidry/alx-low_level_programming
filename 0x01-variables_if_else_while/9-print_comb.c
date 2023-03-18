#include <stdlib.h>
#include <stdio.h>

/**
* main - is the Entery point everthing goes to main .
* Return: 0 code is good .
*/

int main(void)
{
char i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
