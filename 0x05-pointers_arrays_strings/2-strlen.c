#include "main.h"


/**
* _strlen - count the length of given string .
* @str: is the string that we want to count length og .
* Return: the length of the given string .
*/


int _strlen(char *str)
{
int r = 0;
while (str[r])
{
r++;
}
return (r);
}
