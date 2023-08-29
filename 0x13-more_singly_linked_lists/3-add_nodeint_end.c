#include "lists.h"
/**
 * add_node_end - add node at the end
 * @n: number value to put in node
 * @head: list head
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail, *temp;


	new_tail = malloc(sizeof(listint_t));
	if (!new_tail)
		return (NULL);
	new_tail->n = n;
	if (!*head)
		*head = new_tail;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_tail;
	}
	return (new_tail);
}
