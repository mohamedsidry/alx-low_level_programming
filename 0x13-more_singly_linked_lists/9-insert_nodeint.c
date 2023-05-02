#include "lists.h"



/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to linked list .
* @idx: index to insert to .
* @n: data to store in the node .
* Return: pointer to new node if success otherwise NULL.
*
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new_node;
listint_t *node = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
{
return (NULL);
}
else
{
new_node->n = n;
new_node->next = NULL;
}
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
else
{

for (i = 0 ; node && i < idx ; i++)
{
if (idx == i + 1)
{
new_node->next = node->next;
node->next = new_node;
return (new_node);
}
else
{
node = node->next;
}
}
}
return (NULL);
}
