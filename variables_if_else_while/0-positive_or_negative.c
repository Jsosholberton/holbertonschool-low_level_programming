#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* if n > 0 is positive, if n = 0 is zero, if n > 0 is negative */
int main(void) /*no description*/
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", n);
else if (n > 0)
printf("%d is positive\n", n);
else
printf("%d is negative\n", n);

return (0);
}
