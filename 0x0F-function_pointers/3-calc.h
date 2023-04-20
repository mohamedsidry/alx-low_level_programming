#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>


#define ERROR98 98 /**the number of arguments is wrong !**/
#define ERROR99 99  /**Choose a valid operation !**/
#define ERROR100 100 /** Wrong  divison ! **/


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



int op_add(int ,int);
int op_mul(int ,int);
int op_div(int ,int);
int op_sub(int ,int);
int op_mod(int ,int);



int (*get_op_func(char *s))(int, int);

#endif
