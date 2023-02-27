#include "main.h"
/**
 * swap_int - swaps the values of two integers.*
 * @a: variable 1
 * @b: variable 2
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
