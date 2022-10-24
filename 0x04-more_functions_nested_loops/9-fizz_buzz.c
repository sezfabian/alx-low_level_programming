#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Return : always 0 success
 */
int main(void)
{
int n;

for(n = 1; n < 100; ++n)
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
printf("Buzz\n");

return (0);
}
