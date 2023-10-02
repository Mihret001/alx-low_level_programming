#include "main.h"

/**
 * print_rev - prints a string in a reverse order
 * @s: string that is gonna be printed
 * Return: x
 */

void print_rev(char *s)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
		y++;

	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
