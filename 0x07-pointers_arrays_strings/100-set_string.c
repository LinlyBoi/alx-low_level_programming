#include "main.h"
#include <stdio.h>

/**
 * set_string - set value of pointer to char
 * @s: the pointer
 * @to: the string where to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
