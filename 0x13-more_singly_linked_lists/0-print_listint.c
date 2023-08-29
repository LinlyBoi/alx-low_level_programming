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
	int count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
