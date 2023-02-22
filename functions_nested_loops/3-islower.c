#include "main.h"
/**
 * int_islower - returns 1 if c is lowecase
 * _islower - returns 1 if c is lowercase
 * @c - variable 
 * return: 1 if is lowercase
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
