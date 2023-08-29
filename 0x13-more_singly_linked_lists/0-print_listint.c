#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the whole list
 *
 * @h: list to print elements of
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h != NULL)
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
	else
		return (0);
}
