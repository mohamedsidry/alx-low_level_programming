#include "lists.h"



/**
* listint_len - Count the number of nodes .
* @h: pointer to the linked list .
*
* Return: THe number of nodes .
*/


size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}

return (n);

}
