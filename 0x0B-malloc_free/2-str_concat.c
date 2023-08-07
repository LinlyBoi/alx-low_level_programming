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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = 0;
	while (*(s1 + size))
		size++;
	while (*(s2 + size))
		size++;

	if (size > 0)
		str = malloc(size * sizeof(char));
	else
		return (NULL);

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*s1)
		*(str + i++) = *(s1++);
	while (*s2)
		*(str + i++) = *(s2++);
	if (i > 0)
		*(str + i) = '\0';
	else
		str = "";

	return (str);

}
