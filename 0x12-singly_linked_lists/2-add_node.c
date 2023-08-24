#include "lists.h"
#include <string.h>
/**
 * add_node - add node at the start
 * @str: string
 * @head: list head
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = strlen(str);
	if (head)
		new_head->next = *head;

	*head = new_head;
	return (new_head);
}
