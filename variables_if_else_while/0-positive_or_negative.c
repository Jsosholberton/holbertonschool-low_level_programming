#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* if n > 0 is positive, if n = 0 is zero, if n > 0 is negative */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n == 0){
printf("%n is zero\n");
}else if(n > 0){
printf("%n is positive\n");
}else{
printf("%n is negative\n");
}
return (0);
}
