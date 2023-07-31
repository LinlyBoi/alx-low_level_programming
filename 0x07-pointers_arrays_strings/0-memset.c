#include "main.h"

/**
 * _memset - fills memory with byte
 * Return: pointer to memory
 * @s: memory to fill
 * @b: byte to fill with
 * @n: number of bytes to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int sn;

	sn = n;
	for (i = 0; i < sn; i++)
		*(s + i) = b;
	return (s);
}
