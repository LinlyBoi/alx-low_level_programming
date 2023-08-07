#include "main.h"
#include <stdlib.h>

/**
 * str_concat - cat? 2 strings? meow?
 * @s1: String juan
 * @s2: String does
 * Return: pointer to new string that is s1 s2 combined :)
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, size;

	size = 0;

	while (s1 && *(s1 + size))
		size++;
	while (s2 && *(s2 + size))
		size++;

	str = malloc((1 + size) * sizeof(char));

	if (str == NULL)
		return (NULL);

	i = 0;
	if (s1)
	{
		while (*s1++)
			*(str + i++) = *(s1);
	}

	if (s2)
	{
	while (*s2++)
		*(str + i++) = *(s2);
	}

	*(str + i) = '\0';

	return (str);

}
