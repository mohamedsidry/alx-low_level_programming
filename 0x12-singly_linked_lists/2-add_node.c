#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - insert a node at the start of a linked list .
 * @head: double pointer to the list .
 * @str: string to add in the new node .
 *
 * Return: the address of the new node or NULL if else .
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}
