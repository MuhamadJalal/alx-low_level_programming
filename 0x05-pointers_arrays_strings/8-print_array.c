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
	int count = 0;

	while (a[count] != '\0')
	{
		count++;
	}

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		if (i != count - 1)
		{
			_putchar(',');
			_putchar('\n');
		}

		i++;
	}

}
