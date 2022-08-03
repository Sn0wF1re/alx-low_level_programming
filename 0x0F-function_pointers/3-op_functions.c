#include "3-calc.h"
/**
 *op_add - sum of a and b
 *@a: integer
 *@b: integer
 *
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - difference of a and b
 *@a: integer
 *@b: integer
 *
 *Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - product of a and b
 *@a: integer
 *@b: integer
 *
 *Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division of a by b
 *@a: dividend
 *@b: divisor
 *
 *Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - calculate remainder of a division
 *@a: dividend
 *@b: divisor
 *
 *Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
