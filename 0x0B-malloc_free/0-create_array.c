#include "main.h"
#include <stdlib.h>

/**
 * create_array - make an array
 * @size: size of array
 * @c: char to start the array with
 * Return: pointer to array or NULL if failure
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	i = 0;
	while(i < size)
		*(arr + i++) = c;

	return (arr);

}
