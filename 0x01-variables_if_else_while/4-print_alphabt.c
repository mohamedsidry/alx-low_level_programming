#include <stdio.h>
#include <stdio.h>


/**
* main - is the entry point of code .
* Return: 0 the code is good .
*/


int main(void)
{
int i;
for (i = 97; i < 123 ; i++)
{

if (i != 113 && i != 101)
{
char c = i;
putchar(c);
}

}
putchar('\n');

return (0);
}
