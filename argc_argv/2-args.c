#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: an array of the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int c;
	for (c = 0; c < argc ; c++)
		printf("%s\n", argv[c]);
	return (0);
}
