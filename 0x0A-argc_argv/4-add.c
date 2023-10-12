#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of strings/arguments
 * Return: Always 0 (Success)
 */

int isPositiveInteger(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}
int main(int argc, char *argv[])
{
	int x, sum = 0;
	 if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (x = 1; x < argc; x++)
    {
        if (!isPositiveInteger(argv[x]))
        {
            printf("Error\n");
            return (1);
        }
        sum += atoi(argv[x]);
    }
    printf("%d\n", sum);
    return (0);
}
