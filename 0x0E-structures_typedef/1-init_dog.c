#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = strdup(name);
	if (d->name == NULL)
		return;

	d->age = age;

	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
	free(d->name);
	return;
	}
}

