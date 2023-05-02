#include "lists.h"



/**
* pop_listint -function that deletes the head node of a listint_t linked list .
* @head: pointer to head node .
* Return:  the head node’s data (n).
*/


int pop_listint(listint_t **head)
{
listint_t *new_node;
int data;

if (!head || !*head)
{
return (0);
}
else
{
data = (*head)->n;
new_node = (*head)->next;
free(*head);
*head = new_node;
}

return (data);
}
