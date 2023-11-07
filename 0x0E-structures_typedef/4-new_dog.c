#include <stdlib.h>
#include "dog.h"

/**
 * _copy - Make a copy of passed in argument
 * @src: Data to make copy of
 * Return: Pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - Create a new dog variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	(*doggo).name = new_name;

	(*doggo).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*doggo).name);
		free(doggo);
		return (NULL);
	}
	(*doggo).owner = new_owner;

	return (doggo);
}

