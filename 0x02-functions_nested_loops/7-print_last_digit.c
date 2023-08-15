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
if (n > 0)
{
_putchar((n & 10) + '0');
return ((n & 10) + '0');
}
else if (n < 0)
{
_putchar(((-n) & 10) + '0');
return (((-n) & 10) + '0');
}
_putchar('0');
return (0);
}
