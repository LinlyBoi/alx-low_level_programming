#include "dog.h"
#include <stdio.h>
/**
 *print_dog - print doggo
 *@d: da dog
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	d->age ? printf("Age: %f\n", d->age) : printf("nill");
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
