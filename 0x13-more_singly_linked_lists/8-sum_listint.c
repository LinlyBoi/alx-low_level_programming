#include "lists.h"

/**
 * sum_listint - sum values in linked list
 * @head: head of list
 * Return: the sum duh
 */
int sum_listint(listint_t *head)
{
	if (head)
		return (head->n + sum_listint(head->next));
	else
		return (0);
}
