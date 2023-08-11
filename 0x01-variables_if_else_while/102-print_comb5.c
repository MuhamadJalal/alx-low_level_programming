#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int c, i;
for (c = 0; c < 100; c++)
{
for (i = c; i < 100; i++)
{
putchar('0' + c);
putchar('0' + c);
putchar(' ');
putchar('0' + c);
putchar('0' + i);
if (c != i)
if (c != 98)
putchar(',');
if (c != i)
if (c != 98)
putchar(' ');
}
}
putchar('\n');
return (0);
}
