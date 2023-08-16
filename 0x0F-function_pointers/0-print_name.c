#include "function_pointers.h"

/**
 * print_name - print name functional style
 * @name: Name to print
 * @f: how we printing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
