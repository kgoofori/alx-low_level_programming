#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: struct dog
 * @name: string
 * @age: int
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
