#include <stdio.h>
#include <stdio.h>


/**
* main - is the entry point of code .
* Return: 0 the code is good .
*/


int main(void)
{
int i, j;
char alpha[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ$";
for (i = 97; i < 123 ; i++)
{
char c = i;
putchar(c);
}
for (j = 0; j < 27 ; j++)
{
putchar(alpha[j]);
}

putchar('\n');

return (0);
}
