#include "main.h"



/**
* leet - change spesific characters to spesific numbers .
* @str: input pointer to an array .
* Return: returns modified string with characters changed to spesific numbers ;
*
*/

char *leet(char *str)
{
int len = 0;
int i;

char characters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

while (str[len] != '\0')
{
for (i = 0; i < 10 ; i++)
{
if (str[len] == characters[i])
{
str[len] = numbers[i];
}
}
len++;
}
return (str);
}
