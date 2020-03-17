#include "holberton.h"

/**
* print_int - prints a signed integer to stdout
* @arglist: Args vars
* Return: Number of chars written
*/

int print_int(va_list arglist)
{
	int d;
	char *b;

	d = va_arg(arglist, int);
	b = itos(d);
	write(1, b, _strlen(b));
	d = _strlen(b);
	free(b);
	return (d);
}

/**
* itos - Converts int to string
* @num: Number to be convered
* Return: Buffer containing string
*/

char *itos(int num)
{
	int i;
	unsigned int rem, len = 0, n;
	char *s;

	if (num < 0)
	{
		len++;
		if (num != -2147483648)
			n = (num * -1);
		else
		{
			n = num;
		}
	}
	else
		n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (num < 0)
	{
		len++;
		if (num != -2147483648)
			n = (num * -1);
		else
		{
			n = num;
		}
	}
	for (i = len - 1; i >= 0; i--)
	{
		rem = n % 10;
		n = n / 10;
		s[i] = rem + '0';
	}
	if (num < 0)
		s[0] = '-';
	s[len] = '\0';
	return (s);
}
