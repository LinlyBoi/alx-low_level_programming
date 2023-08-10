#include "main.h"
#include <stdlib.h>

/**
 *int *array_range - makes an array with numbers
 *@min: minimum value
 *@max: value to fill with array
 *Return: array with elements from min to max
 */
int *array_range(int min, int max)
{
	int *arr;
	int n, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);

	i = 0;
	for (n = min; n <= max; n++)
		*(arr + i++) = n;
	return (arr);
}
