#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - yep
 * Description: Is good
 * @n: the starting point
 * Return: VOID
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	_putchar('\n');
}
