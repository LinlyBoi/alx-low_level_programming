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
	int i, size;

	size = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + size))
		size++;
	while (*(s2 + size))
		size++;

	if (size > 0)
		str = malloc((1 + size) * sizeof(char));
	else
		str = malloc(sizeof(char));

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*s1)
		*(str + i++) = *(s1++);
	while (*s2)
		*(str + i++) = *(s2++);

	*(str + i) = '\0';

	return (str);

}
