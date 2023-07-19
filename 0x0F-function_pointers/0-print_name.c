#include "function_pointers.h"


/**
* print_name - function that execute function .
*
* @name: pointer to array of char.
* @f: pointer to function .
*
*
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name); /** call back function **/

}
