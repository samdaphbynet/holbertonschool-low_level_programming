#include "dog.h"

/**
 * len - function that count string.
 * @string: string of a count lenght
 * Return: pointer of string
 */

int len(char *string)
{
	int i = 0;

	for (; *string != '\0'; string++)
		 i++;

	return (i);
}

/**
 * cpy - function that copy string.
 * @dest: destination of string copy.
 * @src: source of string a copy.
 * Return: pointer of dest
 */

char *cpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}

/**
 * new_dog -  function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	int o = 0, n = 0;

	if (name != NULL && owner != NULL)
	{
		n = len(name) + 1;
		o = len(owner) + 1;

		new = malloc(sizeof(dog_t));

		if (new == NULL)
			return (NULL);

		new->name = malloc(sizeof(char) * n);

		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}

		new->owner = malloc(sizeof(char) * o);

		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
		new->name = cpy(new->name, name);
		new->owner = cpy(new->owner, owner);
		new->age = age;
	}
	return (new);
}






































