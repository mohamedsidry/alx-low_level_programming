#include "main.h"
#include <stdio.h>


int _atoi(char *s);


/**
* main- THe Entry point .
* @argc: the number of cmd line args .
* @argv: a pointer to an array of cmd line args .
* Return: return 1 the number of args is less than 2 return 0 code is good.
*
*/



int main(int argc, char *argv[])

{
int result, arg1, arg2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
arg1 = _atoi(argv[1]);
arg2 = _atoi(argv[2]);
result = arg1 *arg2;
printf("%d\n", result);
return (0);
}
/**
 * _atoi - takes string argument and convert it to an integer .
 * @arg: string to be converted .
 * Return: the int value of given char .
 */
int _atoi(char *arg)
{
int i, d, n, len, f, number;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
number = 0;
while (arg[len] != '\0')
{
len++;
}
while (i < len && f == 0)
{
if (arg[i] == '-')
{
++d;
}
if (arg[i] >= '0' && arg[i] <= '9')
{
number = arg[i] - '0';
if (d % 2)
{
number *= -1;
}
n = n * 10 + number;
f = 1;
if (arg[i + 1] < '0' || arg[i + 1] > '9')
{
break;
}
f = 0;
}
i++;
}
if (f == 0)
{
return (0);
}
return (n);
}
