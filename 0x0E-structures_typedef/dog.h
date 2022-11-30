#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct dog - dog struct
 * @name: dog name
 * @age: age
 * @owner: owner
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
