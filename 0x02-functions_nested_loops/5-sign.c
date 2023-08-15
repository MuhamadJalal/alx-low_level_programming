#include "main.h"

/**
* print_sign - entry point
*
* Description: This function checks for lowercase character.
* @n: the charater to check
*
* Return: void
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
