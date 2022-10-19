#include<stdio.h>

/**
 * times_table - function prints  9 times table
 *
 * Return: 0 always success.
 */
void times_table(void)
{
int num1;
int num2;

for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
if (num2 > 0 && (num1 * num2) < 10)
{
putchar(' ');
}
printf("%i", (num1 * num2));
if (num2 == 9 )
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
