#include<stdio.h>

/**
 * main - Entry point of the program
 */
int main(void)
{
int n;

for(n = 1; n <= 100; ++n)
{
if (n % 3 == 0)
{
printf("Fizz");
}
if (n % 5 == 0)
{
printf("Buzz");
}
else if (n % 3 != 0)
{
printf("%d", n);
}
putchar(' ');
}
printf("\n");

return (0);
}
