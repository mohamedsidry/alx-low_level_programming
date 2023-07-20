#ifndef HEADER_CALC_H
#define HEADER_CALC_H

/*** STANDARD LIBRARIES ***/
#include <stdio.h>
#include <stdlib.h>

/*** SYMBLOIC CONSTANTS MACROS ***/



/*** FUNCTIONS PROTOTYPES ***/

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);


/*** STRUCTS AND DATA TYPES ***/

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

#endif /** HEADER_CALC_H **/
