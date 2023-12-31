#include "dog.h"
#include <math.h>
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog.
 *
 * @d: the struct dog variable.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		/* age */
		if (isnan((*d).age))
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		/* owner */
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
