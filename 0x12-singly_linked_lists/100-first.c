#include "lists.h"
#include <stdio.h>
void first(void) __attribute__ ((constructor));

/**
 * first - main? who? I came first
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n ");
}
