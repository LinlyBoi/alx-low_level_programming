#include "main.h"
/**
 * print_last_digit - %10
 * Description: 1001? nah 1
 * @n: the number mason
 * Return: the last digit of a given number n
 */
int print_last_digit(int n)
{
	int last = n % 10;

	_putchar(last + '0');
	return (last);
}
