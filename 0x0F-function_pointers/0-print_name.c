#include "function_pointers.h"




/**
* print_name-function to print name using pointer to fun.
*@name: pointer to 1s char in str .
*@f: pointer to fun .
*
*Return: this fun has no return (void) .
*/


void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
