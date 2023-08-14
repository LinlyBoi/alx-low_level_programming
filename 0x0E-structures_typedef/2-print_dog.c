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
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	d->age ? printf("Age: %.6f", d->age) : printf("nill");
	printf("Owner: %s", d->owner ? d->owner : "(nil)");
}
