#include <stdio.h>
#include <stdlib.h>


#define ERROR1 1 /** number of argument is not the correct one !*/
#define ERROR2 2 /** number of bytes is negative !*/

/**
* main -entry point .
* @argc: the number of command line args .
* @argv: an array of cmd line args .
* Return: 0 code is good .
*/


int main(int argc, char *argv[])
{
int i, number_of_bytes;
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
arr = (char *)main;
for (i = 0 ; i < number_of_bytes ; i++)
{
if (i == number_of_bytes + 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
printf("\n");
return (0);
}
