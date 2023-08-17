#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a bunch of numbers
 * @separator: string to separate the numbers
 * @n: number of args
 * @...: numbers yes
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;


	va_start(ap, n);
	if (!separator)
		for (i = 0; i < n; i++)
			printf("%d", va_arg(ap, int));
	else
	{
		printf("%d", va_arg(ap, int));
		for (i = 1; i < n; i++)
			printf("%s%d", separator, va_arg(ap, int));
	}

	va_end(ap);
	printf("\n");

}
