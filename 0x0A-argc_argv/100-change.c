#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of strings/arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);

	while (x > 0)
	{
		y++;
	if ((x - 25) >= 0)
	{
		x -= 25;
		continue;
	}
	if ((x - 10) >= 0)
	{
		x -= 10;
		continue;
	}
	if ((x - 5) >= 0)
	{
		x -= 5;
		continue;
	}
	if ((x - 2) >= 0)
	{
		x -= 2;
		continue;
	}
	x--;
	}
printf("%d\n", y);

return (0);
}
