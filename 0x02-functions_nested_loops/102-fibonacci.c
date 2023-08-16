#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, start = 0, end = 1, sum = 0;
for (i = 0; i < 50; i++)
{
sum = start + end;
printf("%d", sum);
start = end;
end = sum;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
