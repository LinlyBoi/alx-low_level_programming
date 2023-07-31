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
 * _strspn - not spoon
 * @s: String
 * @accept: the substring to tally from
 * Return: Number of bytes that are from the accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int sum;
	char i;

	sum = 0;

	while (1)
	{
		i = *s++;
		if (_strchr(accept, i) != NULL)
			sum++;
		else
			break;
		if (i == 0)
			break;
	}
	return (sum);
}
