#include "main.h"



/**
* swap_int - swaps two intigers .
* @a: first arg .
* @b: second arg .
*/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
