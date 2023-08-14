#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog who dis
 * @name: new name
 * @age: new age
 * @owner: new owner
 *
 * Return: new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	dog_t *da_dog;

	new_name = name;
	new_owner = owner;

	da_dog = malloc(sizeof(dog_t));
	if (!da_dog)
		return (NULL);

	da_dog->name = new_name;
	da_dog->owner = new_owner;
	da_dog->age = age;

	return (da_dog);
}
