#ifndef funtions_pointer
#define funtions_pointer
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
/**
 * printer -
 */

typedef struct printer
{
	char *structure;
	void (*print)(va_list types);

} printer;

#endif
