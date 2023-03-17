#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int cents, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf ("0\n");
		return (0);
	}
	count += (cents / 25);
	cents = (cents % 25);
	count += (cents / 10);
	cents = (cents % 10);
	count += (cents / 5);
	cents = (cents % 5);
	count += (cents / 2);
	cents = (cents % 2);
	count += cents;
	printf("%d\n", count);
	return (0);
}
