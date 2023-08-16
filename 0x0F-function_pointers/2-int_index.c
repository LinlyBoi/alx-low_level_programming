#include "function_pointers.h"

/**
 * int_index - get the index of an element
 * @array: it speaks for itself
 * @size: size of array
 * @cmp: the cool function we use to match
 * Return: index of element, -1 if not found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(size > 0 && array && cmp))
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);
}
