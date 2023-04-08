#include "main.h"
/**
 * flip_bits - returns the number of bits
 * @n: variable
 * @m: variable to flip
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int get = n ^ m, bits = 0;

	while (get > 0)
	{
		bits += (get & 1);
		get >>= 1;
	}

	return (bits);
}
