#include "main.h"



/**
* _strlen_recursion - count the length of string using recursion .
* @s: pointer to string .
* Return: the length of string .
*/


int _strlen_recursion(char *s)
{

if (!*s)
{
return (0);
}
else
{
return (_strlen_recursion(s + 1) + 1);
}

}
