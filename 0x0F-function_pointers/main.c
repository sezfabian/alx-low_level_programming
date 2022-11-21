int main(int argc, char *argv[])
{
int a1, b1, result;
char str;

int (*func)(int, int);

a1 = atoi(argv[1]);
b1 = atoi(argv[3]);
str = argv[2];

func = get_op_func(str);
if (func != NULL)
{
result = func(a1, b1);
printf("%i\n", result);
}
else 
printf("%s\n", "Error");
return (0);
}
