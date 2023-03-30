#include "main.h"


/**
* _strcmp - compare 2 strings str1 to str2 .
* @str1: poniter to string .
* @str2: poniter to string .
* Return: 3 cases :
* positive value if string 1 > string 2 .
* return 0 if they are equal .
* return nigative value if second string is greater .
*/



int _strcmp(char *str1, char *str2)
{
int counterValue, compareValue;
counterValue = 0;
while (str1[counterValue] == str2[counterValue] && str1[counterValue] != '\0')
{
counterValue++;
}
compareValue = str1[counterValue] - str2[counterValue];
return (compareValue);
}
