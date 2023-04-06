#include "main.h"


/**
* _strlen_recursion - takes a string and return the length of it .
* @str: pointer to the first char of string .
* Return: the value of return is an int (length of string) .
*
*/




int _strlen_recursion(char *str)
{
int len = 0;
if (*str)
{
len = 1 +  _strlen_recursion(str + 1);
}
return (len);
}
