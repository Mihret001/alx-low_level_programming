#include "main.h"

/**
 * print_alphabet - prints the alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
