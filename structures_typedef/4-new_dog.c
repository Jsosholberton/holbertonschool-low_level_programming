#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - register new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the pointer of the new data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	int len1 = 0, len2 = 0;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
	{
		return (NULL);
	}
	dogg->name = malloc((len1 * sizeof(char)) + 1);
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->owner = malloc((len2 * sizeof(char)) + 1);
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	for (len1 = 0; name[len1]; len1++)
	{
		dogg->name[len1] = name[len1];
	}
	dogg->name[len1] = '\0';
	dogg->age = age;
	for (len2 = 0; owner[len2]; len2++)
	{
		dogg->owner[len2] = owner[len2];
	}
	dogg->owner[len2] = '\0';
	return (dogg);
}
