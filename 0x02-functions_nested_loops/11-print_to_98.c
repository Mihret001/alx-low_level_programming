#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers up to 98
 * @n: numbers
 * Return: 0
 */

void print_to_98(int n)
{
	int g;

	if (n >= 0 && n <= 98)
	{
		for (g = n; g <= 98; g++)
		{
			printf("%d", g);
			if (g != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (g = n; g <= 98; g++)
		{
			printf("%d", g);
			if (g != 98)
				printf(", ");
			}
		printf("\n");
		}
	else if (n > 98)
	{
		for (g = n; g >= 98; g--)
		{
			printf("%d", g);
			if (g != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
	}
