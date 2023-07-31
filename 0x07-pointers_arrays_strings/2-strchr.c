#include "main.h"
#include <stdio.h>
/**
 * _strchr - find first occurence of character
 * @s: the string
 * @c: charcter to find
 * Return: returns pointer to char or NULL if not exist
 */
char *_strchar(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < sizeof(s); i++)
	{
		if (*(s + i) == c)
			return &(*(s+i));
	}
	return (NULL);
}
