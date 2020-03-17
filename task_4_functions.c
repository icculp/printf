#include "holberton.h"

/**
 * print_unsigned - prints an unsigned int in decimal notation
 *@arglist: Args vars
 *Return: Count of digits.
 */

int print_unsigned(va_list arglist)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int ct;

	n = va_arg(arglist, unsigned int);

	m = 1000000000;
	a[0] = n / m;

	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, ct = 0; i < 10; i++)
	{
		sum += a[i];

		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			ct++;
		}
	}
	return (ct);
}
