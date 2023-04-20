#include <stdio.h>
#include <stdlib.h>


#define ERROR1 1 /** number of argument is not the correct one !*/
#define ERROR2 2 /** number of bytes is negative !*/

void print_opcode(char *s, int number_of_bytes);

/**
* main -entry point .
* @argc: the number of command line args .
* @argv: an array of cmd line args .
* Return: 0 code is good .
*/


int main(int argc, char *argv[])
{
int number_of_bytes;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(ERROR1);
}
number_of_bytes = atoi(argv[1]);
if (number_of_bytes < 0)
{
printf("Error\n");
exit(ERROR2);
}
print_opcode((char *)&main, number_of_bytes);
return (0);
}

/**
* print_opcode - prints opcode .
* @fun: poniter to main function .
* @n: the number of bytes to print .
*
*/


void print_opcode(char *fun, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%.2hhx", fun[i]);
if (i < n - 1)
{
printf(" ");
}
}
printf("\n");
}
