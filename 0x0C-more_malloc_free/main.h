#ifndef MAIN_H
#define MAIN_H

/** STANDARD LIBRARIES **/

#include <stdlib.h>

/** MACROS **/

#define EX89 89
#define ENDBYTE 1
#define INITVALUE 0

/** FUNCTIONS PROTOTYPES **/

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);


#endif /** MAIN_H **/
