#include "3-calc.h"


/**
* main - entry point .
*
* @argc: number of cmd arguments passed .
* @argv: array of given args .
*
* Return: 0 code is good otherwise read description below .
*
* Description: this program preform math operations .
* (addition ,substruction, multiplication, division,remainder of the division.
* Returns :
* 98 : you passed less or more than 3 args.
* 99 : action you try to preform unsupported only (+,-,*,/,%) supported .
* 100 : you can not divide on (0) .
*/

int main(int argc, char *argv[])
{
int a, b, result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Errror\n");
exit(99);
}

if (((argv[2][0] == '/' || argv[2][0] == '%') && b == 0))
{
printf("Error\n");
exit(100);
}

result = get_op_func(argv[2])(a, b);

printf("%d\n", result);


return (0);
}
