#include "main.h"
#include <stdio.h>
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
	i = *s;

	while (i != '\0')
	{
		i = *s++;
		if (_strchr(accept, i) != NULL)
			sum++;
		else
			break;
	}
	return (sum);
}
