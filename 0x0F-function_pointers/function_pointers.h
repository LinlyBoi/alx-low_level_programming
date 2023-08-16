#include <stdlib.h>

#ifndef __MAIN__
#define __MAIN__
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
