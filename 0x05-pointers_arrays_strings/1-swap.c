#include "main.h"

/**
* swap_int - updates the value of the variable
* the pointer points to two numbers
* @a: pointer to the variable to be swapped
* @b: pointer to the variable to be swapped
*/
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
