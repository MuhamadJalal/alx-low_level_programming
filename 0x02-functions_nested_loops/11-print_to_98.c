#include <stdio.h>
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
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n < 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n > 98)
{
printf(", ");
}
n--;
}
}
_putchar('\n');
}
