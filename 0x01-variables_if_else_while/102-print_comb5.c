#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int xy = 0;

	while (xy < 99)
	{
		int ij = xy + 1;

		while (ij < 100)
		{
			putchar(xy / 10 + '0');
			putchar(xy % 10 + '0');
			putchar(' ');
			putchar(ij / 10 + '0');
			putchar(ij % 10 + '0');
			if (xy != 98 || ij != 99)
			{
				putchar(',');
				putchar(' ');
			}
			ij++;
			}
			xy++;
			}
	putchar('\n');

	return (0);
}
