#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: number in binary
 *
 * Return: the converted number or
 *         0 if there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, mult = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len--; len >= 0; len--)
	{
		if (b[len] - '0' && b[len] != '1')
			return (0);

		number += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (number);
}
