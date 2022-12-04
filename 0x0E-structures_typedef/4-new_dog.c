#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->age = age;
	my_dog->owner = owner;
	my_dog->name = name;

	return (my_dog);
}
