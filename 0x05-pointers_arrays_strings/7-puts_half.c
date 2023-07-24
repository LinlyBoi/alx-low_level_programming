#include "main.h"
/**
 * puts_half - half only
 * @str: string to print
 */
void puts_half(char *str)
{
	int idx, len;

	len = 0;

	for (; *(str + len) != '\0'; len++)
		;

	if ( len % 2 == 0)
		for (idx = 0; idx < len / 2; idx++)
			_putchar(*(str + idx));
	else
		for (idx = len; idx > len / 2; idx--)
			_putchar(*(str + idx));

	_putchar('\n');
}
