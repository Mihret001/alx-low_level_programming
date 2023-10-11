#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives modulos of 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
