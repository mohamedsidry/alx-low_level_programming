#include "lists.h"


/**
* free_listint - function to free allocated space for linked list .
* @head: pointer to linked list to be freed .
* Return : no return (void) .
*/



void free_listint(listint_t *head)
{
listint_t *node;

while (head)
{
node = head->next;
free(head);
head = node;

}
}
