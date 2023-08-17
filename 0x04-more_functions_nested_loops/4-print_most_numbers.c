#include "main.h"

/**
 * print_most_numbers - prints the numbers from 1 to 100
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: void
 */
void print_most_numbers(void)
{
int i = 0;

while (i < 10)
{

if (!(i == 2 || i == 4))
_putchar(i % 10);

i++;
}

_putchar('\n');
}
