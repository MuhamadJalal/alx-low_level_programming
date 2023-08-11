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
int c, i, y;
for (c = 0; c < 10; c++)
{
for (i = c; i < 10; i++)
{
for (y = i; y < 10; y++)
{
if (c != i && c != y)
putchar(48 + c);
if (c != i && c != y)
putchar(48 + i);
if (c != i && c != y)
putchar(48 + y);
if (c != i && c != y)
if (c != 7)
putchar(',');
if (c != i && c != y)
if (c != 7)
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
