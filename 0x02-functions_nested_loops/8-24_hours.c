#include<stdio.h>

/**
 * jack_bauer - function prints 24hr timer
 *
 * Return: always 0 success.
 */
void jack_bauer(void)
{
int hourms;
int hourls;
int minms;
int minls;

for (hourms = 0; hourms <= 2; hourms++)
{
for (hourls = 0; hourls <= 9; hourls++)
{
for (minms = 0; minms <= 5; minms++)
{
for (minls = 0; minls <= 9; minls++)
{
putchar(hourms + '0');
putchar(hourls + '0');
putchar(':');
putchar(minms + '0');
putchar(minls +'0');
putchar('\n');
}
}
if (hourms == 2 && hourls == 3)
{
break;
}
}
}
}
