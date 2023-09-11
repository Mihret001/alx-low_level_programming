#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		int y = 0;

		while (y < 9)
		{
			int i = 0;
			
			while (i < 10)
			{
				int j = i + 1;

				while (j <10)
				{
			putchar(x + '0');
			putchar(y + '0');
			putchar(' ');
			putchar(i + '0');
			putchar(j + '0');
			if (x != 9 || y != 9 || i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
				}
			i++;
			}		
		y++;
		}
		x++;
	}	
	putchar('\n');

	return (0);
}
