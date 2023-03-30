#include "main.h"



/**
* cap_string - change lower case character to upper case .
* @str: pointer to the string .
* Return: updated Upper case string .
*
*/


char *cap_string(char *str)
{
int len = 0;
int i;
char c[] = {' ', '.', '\t', '\n', '{', '}', ',', '(', ')', ';', '!', '?'};
while (str[len] != '\0')
{
for (i = 0 ; i < 12 ; i++)
{
if (str[len] == c[i] && str[len + 1] >= 'a' && str[len + 1] <= 'z')
{
str[len + 1] = str[len + 1] - ' ';
}
}
len++;
}
return (str);
}
