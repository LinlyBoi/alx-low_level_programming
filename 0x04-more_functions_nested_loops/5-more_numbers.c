#include "main.h"
/**
 * more_numbers - more
 * Description: YEAH
 * Return: VOID
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; j < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('0' + (j / 10));

			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}

}
