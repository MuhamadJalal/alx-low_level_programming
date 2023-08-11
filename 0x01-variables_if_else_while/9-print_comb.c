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
int c;
for (c = 0; c < 10; c++)
{
putchar(48 + c);
if (c < 9)
putchar(',');
if (c < 9)
putchar(' ');
}
putchar('\n');
return (0);
}
