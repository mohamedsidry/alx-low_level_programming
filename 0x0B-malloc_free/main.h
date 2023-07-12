#ifndef MAIN_H
#define MAIN_H

/*** MACROS ***/
#define INITVALUE 0

/*** STANDARD LIBRARISE ***/
#include <stdlib.h>

/*** FUNCTIONS PROTOTYPES ***/
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);

#endif /** MAIN_H */
