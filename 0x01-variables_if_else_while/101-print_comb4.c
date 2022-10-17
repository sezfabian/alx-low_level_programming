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

for (num = 0; num <= 7 ; num++)
{
for (num1 = num + 1; num1 <= 8 ; num1++)
{
for (num2 = num1 + 1; num2 <= 9 ; num2++)
{
putchar(num % 10 + '0');
putchar(num1 % 10 + '0');
putchar(num2 % 10 + '0');
if (num == 7 && num1 == 8 && num2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
