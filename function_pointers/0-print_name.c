#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: pointer to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
