#include<stdio.h>

/**
 *main - Entry point of program
 *
 *Return: Always 0 - successful
 */
int main(void)
{
int num = 0;

for (num = num; num <= 9 ; num++)
{
putchar(num % 10 + '0');
if (num == 9)
continue;
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
