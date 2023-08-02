#include "main.h"
/**
 * _strlen_recursion - getting the legnth of a string but recurring
 * @s: The string
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	return (0);
}
