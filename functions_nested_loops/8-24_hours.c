#include "main.h"
/**
 * jack_bauer - time of ocloc 00:00 -> 23:59
 * @h: hours, @m: minuts
 *
 * Description: print the time minute to minute until 23:59
 * header: print the response
 * Return: no value
 */
void jack_bauer(void)
{
int h, m;

for (h = 0;h <= 23;h++)
  
{
for (m = 0;m <= 59;m++)
  
{
_putchar ((h / 10) + '0');
_putchar ((h % 10) + '0');
_putchar (':');
_putchar ((m / 10) + '0');
_putchar ((m % 10) + '0');
_putchar ('\n');
}
}
}
