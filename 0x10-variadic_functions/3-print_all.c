#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints everything you throw at it
 * @format: format string to deal with every argument
 * @...: bunch of garbage you throw into the function
 */
void print_all(const char * const format, ...)
{
	va_list things;
	unsigned int idx;
	char *sep, *next;

	idx = 0;
	sep = "";
	va_start(things, format);
	if (format)
	{
		while (*(format + idx))
		{
			switch (*(format + idx))
			{
				case 'c':
					printf("%s%c", sep, va_arg(things, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(things, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(things, double));
					break;
				case 's':
					next = va_arg(things, char*);
					if (!next)
						next = "(nil)";
					printf("%s%s", sep, next);
					break;
				default:
					idx++;
						continue;
			}
			sep = ", ";
			idx++;

		}
	}
	va_end(things);
	printf("\n");
}
