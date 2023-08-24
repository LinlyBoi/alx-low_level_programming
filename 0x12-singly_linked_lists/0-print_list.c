#include "lists.h"
#include <stdio.h>

/**
 * _strlen - Takes string and return its length
 *
 * @str: Address to the head of the string (Array of Characters) (Lost btw)
 *
 * Return: Length of String
 */

/**
 * print_list - printing a list
 * @h: list to print elements of
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		printf("[%i] %s\n", h->str ? h->len : 0, h->str ? h->str: "(nil)");
		return 1 + print_list(h->next);
	}
	else
		return (0);

}
