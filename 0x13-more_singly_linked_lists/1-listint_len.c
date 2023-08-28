#include "lists.h"

/**
 * list_lenint - length of linked list
 * @h: list in question
 * Return: number of elements in list
 */
size_t list_lenint(const listint_t *h)
{
	if (h)
		return (1 + list_lenint(h->next));
	else
		return (0);
}
