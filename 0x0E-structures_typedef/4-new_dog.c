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

	da_dog = malloc(sizeof(dog_t));
	new_name = malloc(sizeof(name));
	new_owner = malloc(sizeof(owner));

	if (!da_dog && !new_name && !new_owner)
		return (NULL);
	new_name = _strcpy(new_name, name);
	new_owner = _strcpy(new_owner, owner);

	da_dog->name = new_name;
	da_dog->owner = new_owner;
	da_dog->age = age;

	return (da_dog);
}
/**
 * _strcpy - strcpy at home
 * @dest: destination to copy
 * @src: what we copying
 * Return: pointer to copied destination
 */
char *_strcpy(char *dest, char *src)
{
	int idx, len;

	len = 0;
	for (; *(src + len) != '\0'; len++)
		;

	for (idx = 0; idx < len; idx++)
		*(dest + idx) = *(src + idx);
	*(dest + len) = '\0';

	return (dest);
}
