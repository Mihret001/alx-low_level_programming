#include "main.h"

/**
 * _abs - gives absoulte value of numbers
 * @number: numbers to be checked
 * Return: number or -number
 */

int _abs(int number)
{
	if (number < 0)
	{
		return (-number);
	}
	else if (number >= 0)
	{
		return (number);
	}
	return (0);
}
