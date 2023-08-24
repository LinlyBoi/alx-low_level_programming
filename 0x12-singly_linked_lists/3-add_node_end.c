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


	new_tail = malloc(sizeof(list_t));
	if (!new_tail || !str)
		return (NULL);
	new_tail->str = strdup(str);
	new_tail->len = strlen(str);
	if (!head)
		*head = new_tail;
	else
	{
		temp = *head;
		while(temp->next)
			temp = temp->next;
		temp->next = new_tail;
	}
	return (new_tail);
}
