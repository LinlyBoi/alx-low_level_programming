#include "main.h"

/**
 * factorial - literally calculates the factorial
 * @n: number to get factorial of
 * Return: value of factorial (-1 if error)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
