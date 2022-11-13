#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - calculates the sum of two integers
 * @a: first input
 * @b: second input
 * Return: result of the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first integer input
 * @b: second integer input
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first integer input
 * @b: second int input
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: first integer input
 * @b: second integer input
 * Return: only the whole number from the result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two integers
 * @a: first int
 * @b: second int
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
