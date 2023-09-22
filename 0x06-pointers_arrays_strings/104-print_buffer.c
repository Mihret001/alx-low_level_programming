#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints a buffer
 * @b: buffer that will be printed
 * @size: the size of the memory it is going to occupy
 */
void print_buffer(char *b, int size)
{
	int x, y, z;

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);
		for (y = 0; y < 10; y++)
		{
			(x + y < size) ? printf("%02x", b[x + y])
				: printf("  ");
			(y % 2) ? printf(" ") : 0;
		}
		for (z = 0; z < 10; x++)
			(x + z < size) ? printf("%c", (b[x + z] >= 32 &&
				b[x + z] <= 126) ? b[x + z] : '.') : 0;

		printf("\n");
	}

	(size <= 0) ? printf("\n") : 0;
}
