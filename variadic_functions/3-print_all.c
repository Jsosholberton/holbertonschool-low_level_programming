#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print a character
 * @arg: argument
 */
void print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}

/**
 * print_int - print int
 * @arg: argument
 */
void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - print a float
 * @arg: argument
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - print a string
 * @arg: argument
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - print all
 * @format: format to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
