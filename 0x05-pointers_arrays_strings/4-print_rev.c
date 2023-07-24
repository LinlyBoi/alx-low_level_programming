#include "main.h"
/**
 * print_rev - Doing it backwards
 * Description: Admins might be called here
 * @s: the string
 * Return: Void
 */
void print_rev(char *s)
{
	int idx;

	for (idx = 0; *(s + idx) != '\0'; idx++)
		;
	idx--;

	for (; idx >= 0; idx--)
		_putchar(*(s + idx));
}
