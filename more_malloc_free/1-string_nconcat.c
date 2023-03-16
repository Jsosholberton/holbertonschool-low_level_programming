#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: num of characters
 *
 * Return: null if is empty else the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1 = 0, c2 = 0, i, j;
	char *r;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[c1] != '\0')
	{
		c1++;
	}
	while (s2[c2] != '\0')
	{
		c2++;
	}

	if (n >= c2)
	{
		n = c2;
	}

	r = malloc((c1 + n + 1) * sizeof(char));
	if (r == 0)
	{
		return (0);
	}

	for (i = 0; i < c1; i++)
	{
		r[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		r[i + j] = s2[j];
	}
	r[i + j] = '\0';

	return (r);
}
