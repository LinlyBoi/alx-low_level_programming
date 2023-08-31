#include "main.h"

/**
 * print_binary - prints a binary representation of num
 * @n: num...ber
 */
void print_binary(long n)
{
	unsigned int shifts, temp;

	temp = n;
	for (shifts = 0; temp > 0; shifts++)
		temp = temp >> 1;

	/* (n >> 1) & 1 */
	for (temp = shifts; temp > 0; temp--)
		((n >> temp) & 1) ? _putchar('1') : _putchar('0');
}
