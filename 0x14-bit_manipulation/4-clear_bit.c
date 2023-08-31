#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;
	unsigned int temp;

	if (index > 64)
		return (-1);
	temp = index;
	for (bit = 1; temp > 0; bit *= 2, temp--)
		;

	if ((*n >> index) & 1)
		*n -= bit;

	return (1);
}
