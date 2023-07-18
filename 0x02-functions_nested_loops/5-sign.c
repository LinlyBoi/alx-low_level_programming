#include "main.h"
/**
 * print_sign - ±ve?
 * Description: Prints the sign of the number n
 * @n: the number n you want to check
 * Return: 1 if +ve, -1 if -ve and 0 if zero (yeah)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);
}
