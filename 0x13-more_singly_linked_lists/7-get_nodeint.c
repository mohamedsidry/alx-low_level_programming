#include "lists.h"


/**
* get_nodeint_at_index- return node in a spesfic index .
* @head: pointer to linked list .
*
*@index: the index of node that we want .
* Return: pointer to node if success otherwise NULL .
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
unsigned int i = 0;

while (node && index > i)
{
node = node->next;
i++;
}
if (node)
{
return (node);
}
else
{
return (NULL);
}
}
