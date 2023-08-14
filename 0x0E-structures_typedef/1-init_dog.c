#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - dog = 0
 * @d: da dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns da dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
