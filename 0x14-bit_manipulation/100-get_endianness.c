#include "main.h"

/**
 * get_endianness - checks endianness of a machine
 * Return: 1 or 0
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *x = (char *)&i;

	if (*x)
		return (1);
	else
		return (0);
}
