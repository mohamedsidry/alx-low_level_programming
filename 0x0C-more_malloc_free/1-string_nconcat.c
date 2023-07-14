#include "main.h"


unsigned int getlen(char *str);
char *alloc_mem(unsigned int bytes);
void mem_init(char *ptr, char *str1, char *str2, unsigned int n);

/**
* string_nconcat - concats n bytes from s2 to s1.
*
* @s1: pointer to string 1.
* @s2: pointer to string 1.
* @n: number of chars to add to s1 (bytes) .
*
* Return: pointer to new string if success if not Null.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int s1len, s2len;
unsigned int totlen;

if (s1 == NULL)
s1 == "";
if (s2 == NULL)
s2 = "";

s1len = getlen(s1);

totlen = s1len + n + ENDBYTE;

ptr = alloc_mem(totlen);

if (ptr == NULL)
return (NULL);

mem_init(ptr, s1, s2, n);


return (ptr);

}

/**
* getlen - count the length of string .
*
* @str: input string .
*
* Return: number of bytes in string .
*/


unsigned int getlen(char *str)
{

unsigned int i = 0;

while (str[i] != '\0')
{
i++;
}

return (i);

}

/**
* alloc_mem - allocate memory in the heap .
*
* @bytes: number of bytes to allocate
*
* Return: pointer to memory space . NULL if failed .
*/

char *alloc_mem(unsigned int bytes)
{

char *ptr;

ptr = malloc(sizeof(char) * bytes);

return (ptr);

}

/**
* mem_init - fill memory with s1 and n bytes of s2.
*
* @ptr: pointer to memory space .
* @str1: pointer to string 1.
* @str2: pointer to string 2.
* @n: number of bytes to add from s2 to s1.
*
* Return: void .
*/
void mem_init(char *ptr, char *str1, char *str2, unsigned int n)
{

unsigned int i, j;
i = 0;
j = 0;

while (str1[i] != '\0')
{
ptr[i] = str1[i];
i++;
}

while (j < n)
{
ptr[i + j] = str2[j];
j++;
}

ptr[i + j] = '\0';
}
