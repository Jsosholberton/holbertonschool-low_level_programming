#include "main.h"
/**
 * _islower - returns 1 if c is lowercase.
 * @c: variable.
 *
 * return: 1 if is lowercase, if no 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
