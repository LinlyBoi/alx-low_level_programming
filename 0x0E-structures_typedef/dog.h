#ifndef __MAIN__
#define __MAIN__
typedef struct dog dog;
/**
 * struct dog - what da dog doin
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: DOG
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
