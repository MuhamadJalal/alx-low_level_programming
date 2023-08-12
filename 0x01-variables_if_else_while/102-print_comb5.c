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
for (c = 0; c < 99; c++)
{
for (i = c + 1; i < 99; i++)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
putchar(' ');
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (c == 89 && i == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
