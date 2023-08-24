#include "lists.h"

/**
 * list_len - length of linked list
 * @h: list in question
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	if (h)
		return (1 + list_len(h->next));
	else
		return (0);
}
