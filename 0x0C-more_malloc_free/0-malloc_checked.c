#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - null checking for you
* @b: how many you allocating?
* Return: pointer to the allocated space (unless this whole thing crashes)
*/
void *malloc_checked(unsigned int b)
{
	void *yourmom; /*I can do this? WHY?!*/

	yourmom = malloc(b);
	if (yourmom)
		return (yourmom);
	exit(98);

}
