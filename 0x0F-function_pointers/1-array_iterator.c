#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - it iterates arrays
 * @array: pointer to an array
 * @size: size of an array
 * @action: pointer to function of use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
