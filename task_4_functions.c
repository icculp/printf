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
/**
 *print_octal - converts int to octal notation
 *@va_list: Args vars
 *Return: character count
 */
int print_octal(va_list arglist)
{
	int octal[10], num, i, j;

	num = va_arg(arglist unsigned int);

	for (i = 0; num > 0; i++)
	{
		octal[i] = num % 8;
		number = number / 8;
	}
	for (j = i = 1; j > 0; j--)
	{
		write(1, octal, _strlen(octal));
	}
	b = _strlen(octal);

	return (b);
}
