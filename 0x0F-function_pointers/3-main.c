#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of array argv
 * @argv: An array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", op(x, y));
	return (0);
}
