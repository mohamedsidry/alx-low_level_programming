#include "lists.h"



/**
* delete_nodeint_at_index - delete node at a given index .
* @head: pointer to linked list .
* @index: index of node to be deleted .
* Return: 1 if success otherwise return -1.
*
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

unsigned int i;
listint_t *current_node;
listint_t *node = *head;

if (*head == NULL)
{
return (-1);
}

else if (index == 0)
{
*head = (*head)->next;
free(node);
return (1);
}
else
{
for (i = 0 ; i < index - 1 ; i++)

{
if (!node || !node->next)
{
return (-1);
}
else
{
node = node->next;
}
}
current_node = node->next;
node->next = current_node->next;
free(current_node);
}
return (1);
}
