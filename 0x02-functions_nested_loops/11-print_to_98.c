#include "main.h"

/**
* print_to_98 - entry point
*
* Description: This function prints all natural numbers from n to 98.
*
* @n: the start loop
* Return: void
*/
void print_to_98(int n)
{
while (n <= 98)
{
_putchar((n / 10) + '0');
if (n < 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
_putchar('\n');
}
