#include "main.h"
#include <stdio.h>
/**
 * _strchr - find first occurence of character
 * @s: the string
 * @c: charcter to find
 * Return: returns pointer to char or NULL if not exist
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}

}
