#include <stdlib.h>


int getLen(char *str);


/**
* str_concat - concatinate two strings togather .
* @s1: the first string .
* @s2: the second string .
* Return: pointer to new string in heap .
*/


char *str_concat(char *s1, char *s2)
{
char *newstr;
int lenOfS1, lenOfS2 = 0;
int i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
lenOfS1 = getLen(s1);
lenOfS2 = getLen(s2);
newstr = malloc(sizeof(char) * (lenOfS1 + lenOfS2 + 1));
if (newstr == NULL)
{
return (NULL);
}
else
{
for (i = 0 ; i < lenOfS1 ; i++)
{
newstr[i] = s1[i];
}
for (i = 0 ; i < lenOfS2 ; i++)
{
newstr[i + lenOfS1] = s2[i];
}
}
return (newstr);
}


/**
* getLen- function take string and return the length of it .
* @str: string to count the length of it .
* Return: the length of given string .
*/


int getLen(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
