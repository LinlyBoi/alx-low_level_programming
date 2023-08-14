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
	if (!da_dog)
		return (NULL);

	new_name = _strdup(name);
	new_owner = _strdup(owner);

	da_dog->name = new_name;
	da_dog->owner = new_owner;
	da_dog->age = age;

	return (da_dog);
}

/**
 * _strdup - strdup at home
 * @str: String to duplicate
 * Return: pointer to new String or NULL if you're poor
 */
char *_strdup(char *str)
{
	char *arr;
	int i, size;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (*(str + size))
		size++;

	size++;
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (*str)
		*(arr + i++) = *(str++);

	return (arr);
}
