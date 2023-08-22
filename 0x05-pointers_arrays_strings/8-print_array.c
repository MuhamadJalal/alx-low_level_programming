#include <stdio.h>
#include "main.h"
/**
* print_array - entry point
* the pointer points to char needs to reversed
* @a: pointer points to int array
* @n: count of prented numbers
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}

		i++;
	}

	if (n == 0)
	{
		_putchar('\n');
		_putchar('\n');
	}
}
