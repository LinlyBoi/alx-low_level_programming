#include "main.h"
/**
 * times_table - ??
 * Description: It prints the table of the times
 * Returns: VOID
 */

void times_table(void)
{
	int current_num, multiplicant, result;

	for (current_num = 0; current_num < 10; current_num++)
	{
		for (multiplicant = 0; multiplicant < 10; multiplicant++)
		{
			result = current_num * multiplicant;

			if (multiplicant == 0)
				_putchar(result + '0');

			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
