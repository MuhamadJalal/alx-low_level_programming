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
return (n);
}
else if (n < 0)
{
return (-n);
}
return (0);
}
