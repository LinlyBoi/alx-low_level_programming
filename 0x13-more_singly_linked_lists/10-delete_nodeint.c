#include "lists.h"

/**
 * delete_nodeint_at_index - delete YEET
 * @head: head of list
 * @index: index to yeet
 * Return: 1 if yes, -1 if FAILURE
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(head);
		*head = current;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1 && current; i++)
		current = current->next;

	if (!current || !current->next)
		return (-1);

	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
