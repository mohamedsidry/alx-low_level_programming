#include "main.h"

#define INDEX  1  /*to currect the len of string */


int get_len(char *s);
int compare_two_char(char *s, int len, int index);


/**
* is_palindrome - checks if a string is a palindrome
* @s: string to reverse
*
* Return: 1 if it is, 0 it's not
*/
int is_palindrome(char *s)
{
int lenOfString;
lenOfString = get_len(s) - INDEX;

if (*s == 0)
{
return (1);
}
else
{
return (compare_two_char(s, lenOfString, 0));
}
}

/**
 * get_len - returns the length of a string
 * @s: string to calculate the length of it .
 * Return: length of input string .
 */


int get_len(char *s)
{
if (*s == '\0')
return (0);
return (get_len(s + 1) + 1);
}


/**
* compare_two_char - compare char in the right with the one in the left .
* @s: string to check
* @i: byte index .
* @len: length of the string
*
* Return: 1 if palindrome, 0 if not
*/


int compare_two_char(char *s, int len, int i)
{
if (*(s + i) != *(s + len))
{
return (0);
}
else if (i >= len)
{
return (1);
}
return (compare_two_char(s, len - 1, i + 1));
}
