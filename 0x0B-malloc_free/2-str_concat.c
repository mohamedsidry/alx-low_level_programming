#include "main.h"


unsigned int string_len(char *str);

/**
* str_concat - concat two string togather.
*
* @s1: string 1 .
* @s2: string 2 .
*
* Return: pointer to to new string .
*/

char *str_concat(char *s1, char *s2)
{

unsigned int len;
unsigned int s1_len;
unsigned int s2_len;
unsigned int i = 0, j = 0;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s1_len = string_len(s1);
s2_len = string_len(s2);
len = s1_len + s2_len;


ptr = malloc(sizeof(char) * len + 1);

if (ptr == NULL)
return (NULL);
else
{
while (i < s1_len)
{
ptr[i] = s1[i];
i++;
}
while (j < s2_len + 1)
{
ptr[i] = s2[j];
i++;
j++;
}
}

return (ptr);

}

/**
* string_len - count the length of string .
*
* @str: string to count the length of .
*
* Return: the length .
*/



unsigned int string_len(char *str)
{

unsigned int i = 0;


while (str[i] != '\0')
{
i++;
}
return (i);
}
