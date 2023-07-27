#include "main.h"

/**
 * strncat - strcat but limited
 * @src: the thing we adding
 * @dest: the thing we adding to
 * @n: how many of src we adding
 * Return: dest after the mutation
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len, s_idx;

	d_len = 0;
	while (dest[d_len] != '\0')
		d_len++;

	for (s_idx = 0; s_idx < n; s_idx++)
		*(dest + d_len + s_idx) = *(src + s_idx);

	return (dest);
}
