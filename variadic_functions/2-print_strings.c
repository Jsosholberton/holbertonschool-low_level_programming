#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed
 * @n: number of strings passed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *strg;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(args, char *);

		if (strg == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", strg);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(args);
}
