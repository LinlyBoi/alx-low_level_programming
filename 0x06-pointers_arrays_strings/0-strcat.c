#include "main.h"
/**
 * _strcat - concat strings
 * @dest: the original string
 * @src: the one that gets added to the end
 * Return: pointer to dest (Result)
 */
char *_strcat(char *dest, char *src)
{
	int d_len, s_idx;

	d_len = 0;
	while (dest[d_len] != '\0')
		d_len++;

	for (s_idx = 0; *(src + s_idx) != '\0'; s_idx++)
		*(dest + d_len + s_idx) = *(src + s_idx);

	return (dest);
}
