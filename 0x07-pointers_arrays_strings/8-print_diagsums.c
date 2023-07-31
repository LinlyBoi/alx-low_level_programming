#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sum
 * @a: Matrix
 * @size: size of matrix nxn yk
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	for (i = 0; i < size * size; i += size + 1)
		sum1 += *(a + i);

	sum2 = 0;
	for (i = size - 1; i < size * size - size + 1; i += size - 1)
		sum2 += *(a + i);

	printf("%d, %d\n", sum1, sum2);
}
