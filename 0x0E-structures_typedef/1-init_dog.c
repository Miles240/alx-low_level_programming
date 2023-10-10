#include "dog.h"

/**
 * init_dog - this function initializes a varible of type struct dog
 * @d: pointer to the variblie
 * @name: a varible in type struct dog
 * @age : a varible in type struct dog
 * @owner : a variable in type struct dog
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
