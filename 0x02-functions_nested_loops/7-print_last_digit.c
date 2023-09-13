#include "main.h"

/**
 * print_last_digit - prints last digit of numbers
 * @number: numbers to be checked
 * Return: i
 */

int print_last_digit(int number)
{
	int i;

	i = number % 10;

	if (number < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
