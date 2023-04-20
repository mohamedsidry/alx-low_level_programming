#include "3-calc.h"




/**
* main-the entry point and the main function that print result .
* @argc: the number of command line arguments .
* @argv: an array of contain command line args .
* Return: 0 code is good .
*/


int main(int argc, char *argv[])
{
int input1, input2, result;
char *op;
if (argc != 4)
{
printf("Error\n");
return (ERROR98);
}
input1 = atoi(argv[1]);
input2 = atoi(argv[3]);
op = argv[2];
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
return (ERROR99);
}
if (input2 == 0 && (*op == '/' || *op == '%'))
{
printf("Error\n");
return (ERROR100);
}
result = get_op_func(op)(input1, input2);
printf("%d\n", result);
return (0);
}
