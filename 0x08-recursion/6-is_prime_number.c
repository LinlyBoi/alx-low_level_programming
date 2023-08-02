#include "main.h"

/**
 * is_prime_number - checks if number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_fr(n, n / 2));
}

/**
 * is_prime_fr - fr fr?
 *
 * @n: number to check
 * @i: number to check if divisible by
 *
 * Return: 1 if yes 0 if no
 */
int is_prime_fr(int n, int i)
{
	if (n % i == 0 && i != 1)
		return (0);
	if (i == 1)
		return (1);

	return (is_prime_fr(n, i - 1));

}
