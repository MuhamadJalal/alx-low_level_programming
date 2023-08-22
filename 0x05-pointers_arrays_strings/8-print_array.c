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

	while (a[i] != '\0')
	{
		printf(a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar('\n');
		}

		i++;
	}

}
