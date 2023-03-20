#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: info dogs to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
