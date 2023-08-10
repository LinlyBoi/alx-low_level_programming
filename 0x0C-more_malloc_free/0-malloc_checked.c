#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - null checking for you
 * @b: how many you allocating?
 */
 void *malloc_checked(unsigned int b)
 {
	void *yourmom; /*I can do this? WHY?!*/

	yourmom = malloc(b);
	if (yourmom)
		return (yourmom);
	else
		exit(98);

 }
