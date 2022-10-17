#include<stdio.h>

/**
 *main - Entry point of program
 *
 *Return: Always 0 - successful
 */
int main(void)
{
int num;
int num1;
int num2;
int num3;

for (num = 0; num <= 9 ; num++)
{
for (num1 = 0; num1 <= 9 ; num1++)
{
for (num2 = num; num2 <= 9 ; num2++)
{
for (num3 = num1 + 1; num3 <= 9 ; num3++)
{
if (num == 0 && num1 == 1 && num2 == 0 && num3 ==0)
continue;
putchar(num % 10 + '0');
putchar(num1 % 10 + '0');
putchar(' ');
putchar(num2 % 10 + '0');
putchar(num3 % 10 + '0');
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
