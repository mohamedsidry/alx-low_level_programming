#include <stdlib.h>


unsigned int getLen(char *str);


/**
* string_nconcat-concatinate two strings togather with number of bytes option.
* @s1: the first string .
* @n: the number of bytes to copy from s2 .
* @s2: the second string .
* Return: pointer to new string in heap .
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newstr;
unsigned int lenOfS1, lenOfS2 = 0;
unsigned int i;
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
newstr = malloc(sizeof(char) * (lenOfS1 + n + 1));
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
if (n >= lenOfS2)
{
for (i = 0 ; i < lenOfS2 ; i++)
{
newstr[i + lenOfS1] = s2[i];
}
}
else
{
for (i = 0 ; i < n ; i++)
{
newstr[i + lenOfS1] = s2[i];
}
}
}
return (newstr);
}


/**
* getLen- function take string and return the length of it .
* @str: string to count the length of it .
* Return: the length of given string .
*/


unsigned int getLen(char *str)
{
unsigned int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
