#include<stdio.h>

/**
 *main - Entry point of program
 *
 *Return: Always 0 - successful
 */
int main(void)
{
int num = 0;
int num2;

for (num = num; num <= 8 ; num++)
{
for (num2 = num + 1; num2 <= 9 ; num2++)
{
putchar(num % 10 + '0');
putchar(num2 % 10 + '0');
if (num == 8 || num2 == 9)
continue;
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
