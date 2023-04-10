#ifndef main_h
#define main_h

char *_memset(char *str, char b, int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *src, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

#endif
