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
for (c = 0; c < 10; c++)
{
for (i = c; i < 10; i++)
{
if (c != i)
putchar(48 + c);
if (c != i)
putchar(48 + i);
if (c != i)
if (i < 9)
putchar(',');
if (c != i)
if (i < 9)
putchar(' ');
}
}
putchar('\n');
return (0);
}
