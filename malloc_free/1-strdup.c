#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicate
 *
 * Return: null if str is null, else return the pointer to the duplicate string
 */
char *_strdup(char *str)
{
	int c = 0;
	char *new_str;
	char *tmp;

	if (str == 0)
	{
		return (0);
	}

	while (str[c] != '\0')
	{
		c++;
	}
	c++;

	new_str = (char *)malloc(c * sizeof(char));
	if (new_str == 0)
	{
		return (0);
	}
	tmp = new_str;
	while (*str != '\0')
	{
		*tmp++ = *str++;
	}
	*tmp = '\0';

	return (new_str);
}
