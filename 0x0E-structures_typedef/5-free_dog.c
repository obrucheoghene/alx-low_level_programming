#include "dog.h"

/**
 * free_dog - free dog
 * @d: pointer to dog;
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);

}
