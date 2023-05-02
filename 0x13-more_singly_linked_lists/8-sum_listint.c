#include "lists.h"


/**
* sum_listint - calculate the sum of all data in linked list .
* @head: pointer to linked list .
*
* Return: the sum of all data in the linked list .
*/


int sum_listint(listint_t *head)
{
listint_t *node = head;
int result = 0;

while (node)
{
result += node->n;
node = node->next;
}

return (result);
}
