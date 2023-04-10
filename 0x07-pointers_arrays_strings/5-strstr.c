#include "main.h"




/**
* _strstr - function that locates a substring.
* @haystack: arg pointer to sstring .
* @needle: arg pointer to string .
* Return: return 0 if succeed .
*/


char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *ptr1 = haystack;
char *ptr2 = needle;

while (*ptr1 == *ptr2 && *ptr2 != '\0')
{
ptr1++;
ptr2++;
}
if (*ptr2 == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}
