#include "lists.h"

/**
 * listint_t *insert_nodeint_at_index - yes
 * @head: head of list
 * @idx: index at insert at
 * @n: value to insert
 * Return: address to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	current = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;

	if (!current)
		return (NULL);


	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
