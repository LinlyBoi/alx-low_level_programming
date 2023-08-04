#include "main.h"

/**
 * _strncpy - strcpy with an n
 * @dest: the buffer we copying to
 * @src: the idot we ctrl+c-ed
 * @n: how many?
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s_idx;

	for (s_idx = 0; s_idx < n && *(src + s_idx) != '\0'; s_idx++)
		*(dest + s_idx) = *(src + s_idx);

	while (dest[s_idx] != '\0' && s_idx < n)
		*(dest + s_idx++) = '\0';

	return (dest);
}
