#nclude<stdio.h>

 /**
  * _memset - fills memory with constant byte
  *
  * @s: pointer to char
  * @b: constant byte
  * @n: firsy number of bytes
  *
  * Returns s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int c;
	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}

