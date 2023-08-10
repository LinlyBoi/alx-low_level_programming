#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - how many times we gotta do this old man
 * @s1: First String
 * @s2: String to add at end of s1
 * @n: how many bytes of s2 we adding
 * Return: pointer with new str / NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *chonky;
	unsigned int i, j;

	if (n <= sizeof(*s2))
		chonky = malloc(sizeof(*s1) + n);
	else
		chonky = malloc(sizeof(*s1) + sizeof(*s2) - 1);

	if (chonky)
	{
		i = 0;
		j = 0;
		while (s1 && *s1)
			*(chonky + i++) = *(s1 + j++);
		j = 0;
		while (s2 && *s2)
			*(chonky + i++) = *(s2 + j++);

		*(chonky + i) = '\0';

		return (chonky);
	}
	else
		return (NULL);
}
