#include "main.h"

/**
 * factorial - returns a factorial of a number
 * @n: number whose factorial will be returned
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
