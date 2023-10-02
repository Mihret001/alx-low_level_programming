#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of strings/arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
		if (!isdigit(argv[x][y]))
		{
			printf("Error\n");
			return (1);
		}
			sum += atoi(argv[x]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
