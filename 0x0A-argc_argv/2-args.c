#include "main.h"



/**
* main - entry point .
*
* @argc: number of args passed to main .
* @argv: array of args passed to main.
*
* Return: 0 code is good .
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}


return (0);
}
