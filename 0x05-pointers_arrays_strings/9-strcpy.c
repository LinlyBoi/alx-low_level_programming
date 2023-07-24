#include "main.h"
/**
 * _strcpy - strcpy at home
 * @dest: destination to copy
 * @src: what we copying
 * Return: pointer to copied destination
 */
char *_strcpy(char *dest, char *src)
{
	int idx, len;

	len = 0;
	for (; *(src + len) != '\0'; len++)
		;

	for (idx = 0; idx < len; idx++)
		*(dest + idx) = *(src + idx);
	*(dest + len) = '\0';

	return (dest);
}
