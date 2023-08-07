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
	int i, size;

	if (str == NULL)
		return (NULL);

	size = 1;
	while (*(str + size))
		size++;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (*str)
		*(arr + i++) = *(str++);

	return (arr);
}
