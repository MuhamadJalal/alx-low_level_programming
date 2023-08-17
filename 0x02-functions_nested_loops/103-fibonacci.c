#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
float e;
unsigned long start = 0, end = 1, sum = 0;
while (true)
{
sum = start + end;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
e += sum;
printf("%lu", sum);
start = end;
end = sum;
}
printf("%.0f", e);
return (0);
}
