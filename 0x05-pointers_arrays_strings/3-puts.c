#include "main.h"
/**
 * _puts - puts but bad
 * Description: When you don't want to use printf
 * @str: the string you put
 * Return void
 */
void _puts(char *str)
{
	int idx;

	for (idx = 0; *(str + idx) != '\0'; idx++)
		_putchar(*(str + idx));
	_putchar('\n');
}
