#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
int r = 0;
int n = 0;
time_t t;

srand((unsigned int) time(&t));
while (n < 2772)
{
r = rand() % 128;
if ((n + r) > 2772)
{
break;
}
n = n + r;
printf("%c", r);
}
printf("%c\n", (2772 - n));
return (0);
}
