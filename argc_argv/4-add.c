#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: ..
 */
int main(int argc, char *argv[])
{
	int a, b, r = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[a]);
	}
	printf("%d\n", r);

	return (0);
}
