#include "main.h"
/**
 * _sqrt_recursion - sqrt but pain
 *
 * @n: the number to find the square root of
 *
 * Return: The natural square root of n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (iter_sqrt(n, n));
}

/**
 * iter_sqrt - sqrt but pain iterator
 *
 * @n: the number to find the square root of
 * @i: x1 that messing with
 *
 * Return: iterates over the possible roots
 */
int iter_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i == (i + n / i) / 2)
		return (-1);

	i = (i + n / i) / 2;
	return (iter_sqrt(n, i));
}
