#ifndef MAIN_H
#define MAIN_H

/**
 * struct my_list - singly linked list .
 * @str: string .
 * @len: length of the string .
 * @next: points to the next node .
 */
typedef struct my_list
{
	char *str;
	unsigned int len;
	struct my_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif

