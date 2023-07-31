#include "main.h"
/**
 * _memcpy - copy memory
 * @src: what you want to copy
 * @dest: where?
 * @n: how many bruh
 * Return: destination after being modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
