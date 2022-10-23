#include<stdio.h>

/**
 * _isupper - checks for uppercase letter
 *
 * @c : character to be checked
 *
 * Return: 1 for uppercase, 0 otherwise.
 */

int _isupper(int c)
{
      char A;
      int b = 0;
      for (A = 'A'; A <= 'Z'; ++A)
      {
            if (c == A)
            {
                  b = 1;
            }
      }
      return (b);
}
