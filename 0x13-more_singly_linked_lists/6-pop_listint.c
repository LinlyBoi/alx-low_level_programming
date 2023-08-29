#include "lists.h"

/**
 * pop_listint - pop
 * @head: pointer to head of list
 * Return: value of node popped
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
