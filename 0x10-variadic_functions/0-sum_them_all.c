#include "main.h"
/**
 * sum_them_all - sums all arguments
 * @n: number of things to sum
 * @...: numbers?
 * Return: Sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
