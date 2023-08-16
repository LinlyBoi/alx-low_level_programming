#include "function_pointers.h"

/**
 * array_iterator - iterate over array with a function
 * @array: really?
 * @size: Please man
 * @action: what to do to the fellas above
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
		for(i = 0; i < (int) size; i++)
			(*action)(*(array + i));
}
