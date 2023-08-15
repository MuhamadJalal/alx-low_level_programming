#include "main.h"

/**
* _abs - entry point
*
* Description: This function computes the absolute value of an integer.
* @n: the charater to compute
*
* Return: void
*/
int _abs(int n)
{
if (n > 0)
{
_putchar((n % 10) + '0');
return (0);
}
else if (n < 0)
{
  double d = n * (-1);
_putchar((d % 10) + '0');
return (0);
}
_putchar('0');
return (0);
}
