#include "main.h"
#include <stdio.h>
/**
 * main - print its name, followed by a new line
 * @argc: description
 * @argv: descripcion
 *
 * Descripcion: print the name of the executable after gcc
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
