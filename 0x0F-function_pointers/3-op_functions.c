#include "3-calc.h"
/**
 * op_add - return the sum of 2 numbers.
 * @a: integer
 * @b: integer.
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * int op_sub - returns difference of 2 numbers.
 * @: integer
 * @b: inteeger.
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - returns the product of 2 numbers.
 * @: integer.
 * @b: integer.
 * Return: product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of 2 numbers.
 * @a: integer.
 * @b: integer
 * Return: quotient.
 */
if op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of division.
 * @a: integer.
 * @b: integer.
 * ReTURN: REMAINDER.
 */
int op_mod(int a, int b)
{
	if ( b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
