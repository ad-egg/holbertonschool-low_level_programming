#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of owner of new dog
 *
 * Return: new dog, or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int namelen, ownlen, i;

	for (namelen = 0; name[namelen] != '\0'; namelen++)
		;
	for (ownlen = 0; owner[ownlen] != '\0'; ownlen++)
		;
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = malloc(sizeof(doggo->name) * namelen);
	if (doggo->name == NULL)
	{	free(doggo);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		doggo->name[i] = name[i];
	doggo->age = age;
	doggo->owner = malloc(sizeof(doggo->owner) * ownlen);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (i = 0; i < ownlen; i++)
		doggo->owner[i] = owner[i];
	return (doggo);
}
