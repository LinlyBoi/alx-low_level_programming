#include "dog.h"
#include <stdio.h>
/**
 *print_dog - print doggo
 *@d: da dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	d->age ? printf("Age: %.6f\n", d->age) : printf("nill");
	printf("Owner: %s", d->owner != NULL ? d->owner : "(nil)");
}
