#include "main.h"



/**
* rot13 - split characters to 2 parts
* and change char from part 1 with the one in same position in part 2 .
* same happen with part 2 .
* @str: input pointer to array of chars.
* Return: return changed string (like incription ) .
*
*/


char *rot13(char *str)
{
int len_src = 0;
int len_a = 0;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (len_src = 0 ; str[len_src] != '\0' ; len_src++)
{
for (len_a = 0 ; a[len_a] != '\0' ; len_a++)
{
if (str[len_src] == a[len_a])
{
str[len_src] = b[len_a];
break;
}
}
}
return (str);
}
