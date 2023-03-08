#include "main.h"
/**
 * calprime - review if the number is prime
 * @a: check
 * @b: prime number
 *
 * Return: 1 if prime, 0 if not
 */
int calprime(int a, int b)
{
if (b < 2 || b % a == 0)
return (0);
else if (a > b / 2)
return (1);
else
return (calprime(a + 1, b));
}
/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (calprime(2, n));
}
