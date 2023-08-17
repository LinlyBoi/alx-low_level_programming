#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a bunch of strings wow
 * @separator: separates strings skipped if null
 * @n: number of strings
 * @...: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	int idx;
	char *next;

	for (idx = 0; idx < n; idx++)
	{
		next = va_arg(words, char *);

		if (!next)
			next = "(nil)";

		if (!separator)
			printf("%s", next);

		else if (separator && idx == 0)
			printf("%s", next);

		else
			printf("%s%s", separator, next);
	}
}
