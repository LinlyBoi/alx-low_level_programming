#include "main.h"
/**
 * puts2 - ye
 * @str: the string
 */
void puts2(char *str)
{
	int idx, len;

	len = 0;

	for (; *(str + len) != '\0'; len++)
		;
	for (idx = 0; idx < len; idx += 2)
		_putchar(*(str + idx));
	_putchar('\n');
}
