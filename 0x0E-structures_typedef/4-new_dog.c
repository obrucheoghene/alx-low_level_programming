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
	char *name2, *owner2;

	if (my_dog == NULL)
	{
		return (NULL);
		free(my_dog);
	}

	name2(name2, name);
	owner2(owner2, owner);
	

	my_dog->age = age;
	my_dog->owner = owner;
	my_dog->name = name;



	return (my_dog);
}
