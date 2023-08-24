#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the whole list
 *
 * @h: list to print elements of
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		printf("[%i] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		return (1 + print_list(h->next));
	}
	else
		return (0);

}
