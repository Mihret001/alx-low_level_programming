#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: a list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int x = 0, y, z = 0;
	char *w;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[x])
	{
		y = 0;
		while (t_arg[y])
		{
			if (format[x] == t_arg[y] && z)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), z = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), z = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), z = 1;
			break;
		case 's':
			w = va_arg(valist, char *), z = 1;
			if (!w)
			{
				printf("(nil)");
				break;
			}
			printf("%s", w);
			break;
		} x++;
	}
	printf("\n"), va_end(valist);
}
