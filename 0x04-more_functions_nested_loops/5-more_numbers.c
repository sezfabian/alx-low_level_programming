void more_numbers(void)
{
int a;
int count;

for (count = 1; count <= 10; ++count)
{
for (a = 0; a <= 14; ++a)
{
if (a > 9)
{
_putchar(a / 10 + '0');
}
else
{
_putchar(a % 10 + '0');
}
}
_putchar('\n');
}
}
