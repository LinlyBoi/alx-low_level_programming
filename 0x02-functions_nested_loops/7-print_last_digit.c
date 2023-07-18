#include "main.h"

/**
 * print_last_digit - %10
 * Description: 1001? nah 1
 * @n: the number mason
 * Return: the last digit of a given number n
 */
int print_last_digit(int n)
{
	int last;

	last  = _abs(n) % 10;

	if (last < 0)
		last = -last;

	_putchar(last + '0');
	return (last);
}

/**
 * _abs - no -ve
 * Description: "-" >:( -> ""
 * @n: the number
 * Return: number without the "-" if exists
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
