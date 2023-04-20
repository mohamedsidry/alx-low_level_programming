#include "3-calc.h"




/**
* get_op_func - detect the function we want .
* @s: the operation to preform .
* Return: a pointer to matched operation with s .
*/



int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
while (ops[i].op != NULL && *(ops[i].op) != *s)
{
i++;
}
return (ops[i].f);
}
