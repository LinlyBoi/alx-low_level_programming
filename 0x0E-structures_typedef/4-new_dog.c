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
	dog_t *da_dog;

	da_dog = malloc(sizeof(dog_t));
	if (!da_dog)
		return (NULL);

	da_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (!da_dog->name)
	{
		free(da_dog);
		return (NULL);
	}

	da_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (!da_dog->owner)
	{
		free(da_dog->name);
		free(da_dog);
		return (NULL);
	}

	_strcpy(da_dog->name, name);
	_strcpy(da_dog->owner, owner);
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
/**
 * _strlen - length of string
 * @str: String to get length
 * Return: Length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	len = 0;
	for (; *(str + len) != '\0'; len++)
		;
	return (len);
}
