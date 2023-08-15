#include "main.h"

/**
* print_sign - entry point
*
* Description: This function checks for lowercase character.
* @n: the charater to check
*
* Return: last digit
*/
int print_sign(int n)
{
int i;
if (n < 0)
{
n = -n;
}
i = n % 10;
if (i < 0)
i = -i;
_putchar(i + '0');
return (i);
}
