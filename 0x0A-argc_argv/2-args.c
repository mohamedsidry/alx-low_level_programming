#include "main.h"


/**
* main - The entry point .
* @argc: the number of cmd line argumants .
* @argv: pointer to an array of cmd line argumants .
*
* Return: 0 code is good .
*/



int main(int argc, char *argv[])

{
int i = 0;
while (i < argc)
{
int j = 0;
while (argv[i][j] != '\0')
{
_putchar(argv[i][j]);
j++;
}
_putchar('\n');
i++;
}
return (0);
}
