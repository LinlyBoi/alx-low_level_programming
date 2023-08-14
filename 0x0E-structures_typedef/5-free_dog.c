#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 *@d: da dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	d->age = 0;
	free(d);
}
