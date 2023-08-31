#include "main.h"

/**
 * get_bit - fr? gets the bit at index
 * @n: number
 * @index: ??
 * Return: bit value or -1 if errors
 */
int get_bit(unsigned long n, unsigned int index)
{
	unsigned long int temp;
	unsigned int shifts;

	/* count the bloody bits */
	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;
	/* check if user is dumb */
	if (index > shifts)
		return (-1);
	/* fr fr */
	return ((n >> index) & 1);
}
