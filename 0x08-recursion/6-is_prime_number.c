#include "main.h"

int prime_recursion(int a, int b);

/**
* is_prime_number - returns 1 if the input integer is a prime number,
* otherwise return 0
* @n: input integer
* Return: int
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_recursion(n, 2));
}

/**
* prime_recursion - Makes possible to evaluate from 1 to n
* @a: same number as n
* @b: number that iterates from 1 to n
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int prime_recursion(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}

	return (prime2(a, b + 1));
}
