#include "dog.h"

/**
*init_dog - a function that initialize a variable of type struct dog
*@d: pointer to be used
*@owner: Bob
*@name: poppy
*@age: 3.5
*Return: Not specified
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
