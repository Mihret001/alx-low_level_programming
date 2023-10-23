#include "main.h"

/**
* is_prime - returns 1 if n is prime
* @n: number to be checked
* @x: number to start checking from
* Return: 1 or 0
*/

int is_prime(int n, int x)
{
	if (x <= 1)
		return (1);
	else if (n % x == 0)
		return (0);
	return (is_prime(n, x - 1));
}

/**
 * is_prime_number - detects if a number is prime
 * @n: number to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
