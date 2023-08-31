#include "main.h"
#include <unistd.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary string.
 * Return: unsigned int or 0 if b is NULL / not a binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, sum = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			sum += power;
	}

	return (sum);
}
