#include "main.h"
/**
 * print_diagonal - the thing
 * @n: length of diagonal
 * Description: prints a diagonal of \
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				switch (j)
				{
					case 1:
						_putchar('\\');
						break;
					default:
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}


}
