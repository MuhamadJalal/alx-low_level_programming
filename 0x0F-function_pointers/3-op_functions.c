#include "3-calc.h"

/**
* op_add - sum a and b
*
* @a: first numbe
* @b: second number
*
* Return: int.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - sub two numbers
*
* @a: first number
* @b: second number
*
* Return: int.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - check the code.
*
* @c: is the char to test
* @x: another num to multible with.
*
* Return: int.
*/
int op_mul(int c, int x)
{
	return (c * x);
}

/**
 * op_div - division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
