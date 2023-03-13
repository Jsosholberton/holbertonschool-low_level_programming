#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: arrayof pointers to the argument
 *
 * Return: the response
 */
int main(int argc, char *argv[])
{
	int a, b, r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	r = a * b;

	printf("%d\n", r);

	return (0);
}
