#include "main.h"




/**
* main- Entry point .
* @argc: number of comand line inputs .
* @argv: is pointer to array of command line inputs .
* Return: the number of command line arguments .
*
*/


int main(int argc __attribute__((unused)), char *argv[])
{
int i = 0;
while (argv[0][i] != '\0')
{
_putchar(argv[0][i]);
i++;
}
_putchar('\n');
return (0);
}
