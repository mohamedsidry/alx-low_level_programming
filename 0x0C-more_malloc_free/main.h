#ifndef MAIN_H
#define MAIN_H

/** STANDARD LIBRARIES **/

#include <stdlib.h>

/** MACROS **/

#define EX89 89
#define ENDBYTE 1

/** FUNCTIONS PROTOTYPES **/

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /** MAIN_H **/
