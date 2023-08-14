#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *new_dog - a function that creates a new dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 *Return: pointer to a new dog, NULL failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z;
	dog_t *newdog;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(x * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		newdog->name[z] = name[z];
	newdog->age = age;
	newdog->owner = malloc(y * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (z = 0; z <= y; z++)
		newdog->owner[z] = owner[z];
	return (newdog);

}
