#include "lists.h"
/*
 * pop_listint - pop
 * @head: pointer to head of list
 * Return: value of node popped
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
		return (0);

	temp = *head;
	n = temp->n;
	temp = temp->next;

	return (n);
}
