#include "main.h"



/**
* rev_string - reverse given string .
* @str: pointer to given string .
*
*/

void rev_string(char *str)
{

int len = 0;
int i = 0;
int half;
char temp;

while (str[len])
{
len++;
}
half = len / 2;
while (half--)
{
temp = str[len - i - 1];
str[len - i - 1] = str[i];
str[i] = temp;
i++;
}
}
