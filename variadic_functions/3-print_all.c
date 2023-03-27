#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anyhing
 */

void print_all(const char * const format, ...)
{
	va_list types;
	int i = 0, j = 0;
	char *separator = "";
	printer func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(types, format);

	while (format[i])
	{
		j = 0;

		while (j < 4 && format[i] != *(func[j].structure))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			func[j].print(types);
			separator = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(types);
}

/**
 * print_char - print a character
 * @types: format to print
 */
void print_char(va_list types)
{
	char character;

	character = va_arg(types, int);
	printf("%c", character);
}

/**
 * print_int - print a intenger
 * @types: format to print
 */
void print_int(va_list types)
{
	int number;

	number = va_arg(types, int);
	printf("%d", number);
}

/**
 * print_float -print a float
 * @types: format to print
 */
void print_float(va_list types)
{
	double float1;

	float1 = va_arg(types, double);
	printf("%f", float1);
}

/**
 * print_str - print string
 * @types: format to print
 */

void print_str(va_list types)
{
	char *strg;

	strg = va_arg(types, char *);
	if (strg == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", strg);
}
