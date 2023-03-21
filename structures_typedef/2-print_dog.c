#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the dog information
 * @d: - struct of the info
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
