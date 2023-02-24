#include "main.h"
/**
 * _isdigit - return 1 if the digit are a number entry 0-9
 * @c: is the variable
 *
 * Return: 1 if is a number 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
