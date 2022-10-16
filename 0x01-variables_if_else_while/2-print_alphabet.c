#include<stdio.h>

/**
 *main - Entry point of program
 *
 *Return: Always 0 - successful
 */
 int main(void)
 {
   char str[] = "abcdefghijklmnopqrstuvwxyz";
   int num;
   
   for( num = 0; num < 27 ; num++)
   {
     putchar(str[num]);
   }
   
   putchar('\n');
   
   return 0;
 }
