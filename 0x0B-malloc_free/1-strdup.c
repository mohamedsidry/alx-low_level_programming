#include "main.h"




unsigned int _getlen(char *str);
void _strcp(char *str, char *sptr, unsigned int len);


/**
* _strdup - create an array in the heap and fill it with copy of string.
*
* @str: input source string.
*
* Return: pointer to the new string .
*/

char *_strdup(char *str)
{

unsigned int size;
char *sptr;




if (str == NULL)
{
return (NULL);
}
else
{
size = _getlen(str);
sptr = malloc(sizeof(char) * size + 1);
}
if (sptr == NULL)
{
return (NULL);
}
else
{
_strcp(str, sptr, size + 1);
}
return (sptr);
}

/**
* _getlen - count the len of string .
* @str:input string.
* Return: the size on bytes.
*/

unsigned int _getlen(char *str)
{

unsigned int i = 0;


while (*str)
{
str++;
i++;
}
return (i);
}

/**
* _strcp - copy string.
*
* @oldstr: input source string .
* @newstr: output new string  .
*
* @len: number of bytes to copy.
*
*/

void _strcp(char *oldstr, char *newstr, unsigned int len)
{

unsigned int i = 0;

while (i < len)
{
newstr[i] = oldstr[i];
i++;
}

}
