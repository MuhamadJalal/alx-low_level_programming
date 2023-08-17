#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
unsigned long start = 0, end = 1, sum = 0;
for (i = 0; i < 98; i++)
{
sum = start + end;
printf("%lu", sum);
start = end;
end = sum;
if (i == 97)
printf("\n");
else
printf(", ");
}
return (0);
}
