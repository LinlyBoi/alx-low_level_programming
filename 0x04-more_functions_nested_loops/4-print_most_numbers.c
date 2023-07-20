#include "main.h"
/**
 * print_most_numbers - no 2,4
 * Description: prints almost all numbers
 * Return: VOID
 */

void print_most_numbers(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		switch (i)
		{
			case 2:
				break;
			case 4:
				break;
			default:
				_putchar('0' + i);
				break;
		}

	}
	_putchar('\n');

}
