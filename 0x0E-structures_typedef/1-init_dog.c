#include "dog.h"

/**
 * init_dog - inits a var of type dog
 *
 * @d: dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner's name
 *
 * Return: void
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
