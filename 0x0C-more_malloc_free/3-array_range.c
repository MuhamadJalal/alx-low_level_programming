#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
*
* @min: lowest value of array.
* @max: max value of array.
*
* Return: int - pointer to newaly alocated.
*/
int *array_range(int min, int max)
{
	int *p;
	int i = 0, full_len = 0;

	if (min > max)
		return (NULL);

	full_len = max - min + 1;

	p = malloc(sizeof(int) * full_len);

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}

	return (p);
}
