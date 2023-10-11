#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: array\argument count
 * @argv: array\argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int x = 0;
	int y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);

	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (x < y)
	{
		printf("%02x", opc[x] & 0xFF);
		if (x != y - 1)
			printf(" ");
		x++;
	}

	printf("\n");
	return (0);
}
