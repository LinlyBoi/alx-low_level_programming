#include "lists.h"

/**
 * list_lenint - length of linked list
 * @h: list in question
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	if (h)
		return (1 + listint_len(h->next));
	else
		return (0);
}
