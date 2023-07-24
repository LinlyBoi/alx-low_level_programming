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
		idx = 0;
	else
		idx = (len - 1) / 2;

	for (; idx < len / 2; idx++)
		_putchar(*(str + idx));

	_putchar('\n');
}
