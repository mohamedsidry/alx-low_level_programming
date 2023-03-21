#include "main.h"

/**
* _islower - checks if character of given input is lower or upper case
* @c: input int the value of char in Ascii.
* Return: 1 the given char is lower case else return 0 .
*/

int _islower(int c)
{
int n;
if (c > 96 && c < 123)
{
n = 1;
}
else
n = 0;
return (n);
}
