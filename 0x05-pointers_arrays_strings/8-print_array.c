#include "main.h"
#include <stdio.h>
/**
 * print_array - array printing
 * @a: the array
 * @n: the number of things to print
 */
void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		if (idx == 0)
			printf("%d", a[idx]);
		else
			printf(", %d", a[idx]);
	}
		printf("\n");
}
