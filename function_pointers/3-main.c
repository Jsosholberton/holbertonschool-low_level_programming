#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - functions
 * @argc: number of arguments
 * @argv: name of executable
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return(0);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return(0);
	}
	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		return(0);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
