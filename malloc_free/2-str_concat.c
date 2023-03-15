#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: null if is empty else the result
 */
char *str_concat(char *s1, char *s2)
{
	int c1 = 0, c2 = 0;
	char *r;
	char *tmp;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	tmp = s1;
	while (*tmp++)
		c1++;
	tmp = s2;
	while (*tmp++)
		c2++;

	r = malloc((c1 + c2 + 1) * sizeof(char));
	if (r == 0)
		return (0);
	tmp = r;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';

	return (r);
}
