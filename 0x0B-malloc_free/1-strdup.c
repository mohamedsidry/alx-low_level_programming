#include <stdlib.h>
#include "main.h"


/**
* _strdup - duplicates string to a new location in the heap .
* @str: string as an argumant .
* Return: On success return a pointer to the new string .
* return NULL if lock of memory .
*/


char *_strdup(char *str)

{
char *dupstr;
int i, len;
len = 0;
if (str == NULL)
{
return (NULL);
}
else
{
while (str[len] != '\0')
{
len++;
}
}
dupstr = malloc(sizeof(char) * (len + 1));
for (i = 0 ; str[i] ; i++)
{
dupstr[i] = str[i];
}
return (dupstr);
}
