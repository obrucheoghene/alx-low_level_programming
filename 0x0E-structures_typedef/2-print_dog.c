#include "dog.h"

/**
 * print_dog - print dog
 * @d: dog name
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");

}
