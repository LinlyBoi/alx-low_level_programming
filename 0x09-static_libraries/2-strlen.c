#include "main.h"
/**
 * _strlen - strlen but worse
 * Description: Get the length of a string
 * @s: the bozo we counting
 * Return: length of string
 */
int _strlen(char *s)
{
	int idx;


	for (idx = 0; *(s + idx) != '\0'; idx++)
	{
		if (*(s + idx) == '\0')
			return (idx);
	}


	return (idx);
}
