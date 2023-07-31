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
/**
 * _strpbrk - finds first occurence but with a filter
 * @s: String
 * @accept: the list
 * Return: pointer to byte where the first occurence happens or NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
	char i;

	do {
		i = *s++;
		if (_strchr(accept, i) != NULL)
			return (s - 1);
	} while (i != '\0');
	return (NULL);
}
