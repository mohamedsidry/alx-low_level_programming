#include "main.h"





/**
* wildcmp - compares two strings if they be considered identical .
* @str1: pointer to the first char of first string .
* @str2: pointer to the first char of second string .
* Return: 2 cases:
* return (1) if all char considered identical .
* return (0) if char of str1 != char in str2 and char of str2 != * .
*/



int wildcmp(char *str1, char *str2)
{

if (*str1 == '\0')
{
if (*str2 != '\0' && *str2 == '*')
{
return (wildcmp(str1, str2 + 1));
}
return (*str2 == '\0');
}



if (*str1 == *str2)
{
return (wildcmp(str1 + 1, str2 + 1));
}
else if (*str2 == '*')
{
return (wildcmp(str1 + 1, str2) || wildcmp(str1, str2 + 1));
}


return (0);

}
