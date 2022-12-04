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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	if (my_dog == NULL || name2 == NULL || owner2 == NULL)
	{
		free(my_dog);
		free(name2);
		free(owner2);
		return (NULL);
	}


	my_dog->age = age;
	my_dog->owner = strcpy(name2, name);
	my_dog->name = strcpy(owner2, owner);



	return (my_dog);
}
