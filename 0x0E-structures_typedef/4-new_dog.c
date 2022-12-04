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
	char *name2 = malloc(sizeof(char) * strlen(name) + 1);
	char *owner2 = malloc(sizeof(char) * strlen(owner) + 1);

	if (my_dog == NULL)
	{
		return (NULL);
		free(my_dog);
	}

	strcpy(name2, name);
	strcpy(owner2, owner);
	

	my_dog->age = age;
	my_dog->owner = owner;
	my_dog->name = name;



	return (my_dog);
}
