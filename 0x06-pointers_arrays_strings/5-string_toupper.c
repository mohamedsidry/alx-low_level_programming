#include "main.h"



/**
* string_toupper - change lower case character to upper case .
* @str: pointer to the string .
* Return: updated Upper case string .
*
*/


char *string_toupper(char *str)
{
int len = 0;
while (str[len] != '\0')
{
if (str[len] <= 'z' && str[len] >= 'a')
{
str[len] = str[len] - ' ';
}
len++;
}
return (str);
}
