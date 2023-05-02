#include "lists.h"


/**
* free_listint2 - function to free allocated space for linked list .
* @head: pointer to linked list to be freed .
* Return : no return (void) .
*/



void free_listint2(listint_t **head)
{
listint_t *node;
if (head == NULL)
{
return;
}
else
{
while (*head)
{
node = (*head)->next;
free(*head);
(*head) = node;
}
*head = NULL;
}
}
