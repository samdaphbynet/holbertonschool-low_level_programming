#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: structure to initialize
 * @name: name of input
 * @age: age of input
 * @owner: owner of input
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
