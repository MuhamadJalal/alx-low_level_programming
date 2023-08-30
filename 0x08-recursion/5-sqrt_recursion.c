#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to get its natural square root if exist.
*
* Return: int.
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_root(x, 1));
}

/**
 * _sqrt_root - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_root(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}

	return (_sqrt_root(x, y + 1));
}
