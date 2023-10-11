#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: size of an array
 * @cmp: pointer to a function
 * Return: indexed number/x
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
	x++;
	}
	return (-1);
}
