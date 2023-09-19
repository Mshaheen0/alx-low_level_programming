#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize value of struct dog.
 *
 * @d: the struct dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(Ok);
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
