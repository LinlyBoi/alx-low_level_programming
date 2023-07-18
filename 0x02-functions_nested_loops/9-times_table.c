#include "main.h"
/**
 * times_table - ??
 * Description: It prints the table of the times
 * Returns: VOID
 */

void times_table()
{
	int current_num, multiplicant;

	for (current_num = 0; current_num < 10; current_num++)
	{
		for (multiplicant = 0; multiplicant < 10; multiplicant++)
		{
			_putchar((current_num * current_num) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
}
