#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary string.
 * Return: unsigned int or 0 if b is NULL / not a binary string
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	while(*(b + i))
	{
		if (!(*(b + i) == '0' ||*(b + i) == '1'))
			return (0);
	}
	return (resolve_binary(b, 0));

}

unsigned int resolve_binary(const char *b, unsigned int power)
{
	if (!*b)
		return (0);
	if (*b == '1')
		return (pow(2, power) + resolve_binary(b+1,  power+1));
	if (*b == '0')
		return (resolve_binary(b+1, power+1))
}

unsigned int pow(unsigned int base , unsigned int power)
{
	if (power == 0)
		return (1);
	return (base * pow(base, power - 1));
}
