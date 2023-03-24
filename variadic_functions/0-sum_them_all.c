#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all its parameters.
 * @n: parameters
 *
 * Return: return the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int result = 0, i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}
