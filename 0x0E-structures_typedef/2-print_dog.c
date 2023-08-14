#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct.
 * @d: struct dog.
 * Return: no return.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			puts("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			puts("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
