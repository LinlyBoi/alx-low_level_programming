#include "lists.h"

/**
 * add_nodeint - add node at the start
 * @n: number to assign value of new head
 * @head: list head
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);

	new_head->n = n;
	if (head)
		new_head->next = *head;

	*head = new_head;
	return (new_head);
}
