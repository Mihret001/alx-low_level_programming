#include <stdio.h>

void __attribute__((constructor)) torto(void);

/**
 * torto - Prints a string before the main function is executed
 */

void torto(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
