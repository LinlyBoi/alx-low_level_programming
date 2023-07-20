#include "main.h"
/**
 * print_line - ______
 * Description: prints n length of _
 * @n: length of thingy
 * Returns: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
