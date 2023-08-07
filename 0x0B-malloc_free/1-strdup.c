#include "main.h"
#include "stdlib.h"

/**
 * _strdup - strdup at home
 * @str: String to duplicate
 * Return: pointer to new String or NULL if you're poor
 */
char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(*str));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (*str)
		*(arr + i++) = *(str++);

	return (arr);
}
