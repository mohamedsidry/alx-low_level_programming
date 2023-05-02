#include "lists.h"




/**
* add_nodeint - inserta new node to the start of linked list .
* @head: pointer to the first node .
* @n : data (number) to insert to the new node .
* Return: pointer to the new node if success otherwise return NULL .
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));

if (!new_node)
{
return (NULL);
}

else
{
new_node->n = n;
new_node->next = *head;
*head = new_node;
}

return (new_node);

}
