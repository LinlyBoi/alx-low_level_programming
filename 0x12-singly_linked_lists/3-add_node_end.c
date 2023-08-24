#include "lists.h"
#include <string.h>
/**
 * add_node - add node at the start
 * @str: string
 * @head: list head
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail, *temp;

	temp = *head;
	if (temp->next)
		add_node_end(&(temp->next), str);

	new_tail = malloc(sizeof(list_t));
	if (!new_tail || !str)
		return (NULL);

	new_tail->str = strdup(str);
	new_tail->len = strlen(str);
	temp->next = new_tail;
	return (new_tail);
}
