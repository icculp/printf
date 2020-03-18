#include "holberton.h"


/**
* print_hex_lower - Prints hex in upper case
* @arglist: Args vars
* Return: Number of chars written
*/

int print_hex_lower(va_list arglist)
{
	int n, m = 0;
	int i = 12;
	int j = 0;
	char outbuf[20];

	n = va_arg(arglist, int);
	if (n < 0)
	{
		n = -n;
		m = 1;
	}
	do {
	outbuf[i] = "0123456789abcdef"[n % 16];
	i--;
	n = n / 16;
	} while (n > 0);

	if (m == 1)
	{
		outbuf[0] = '-';
		++j;
	}
	while (++i < 13)
	{
		outbuf[j++] = outbuf[i];
	}
	outbuf[j] = 0;
	write(1, outbuf, strlen(outbuf));
	return (strlen(outbuf));
}

/**
* print_hex_upper - Prints hex in upper case
* @arglist: Args vars
* Return: Number of chars written
*/

int print_hex_upper(va_list arglist)
{
	int n, m = 0;
	int i = 12;
	int j = 0;
	char outbuf[20];

	n = va_arg(arglist, int);
	if (n < 0)
	{
		n = -n;
		m = 1;
	}
	do {
	outbuf[i] = "0123456789ABCDEF"[n % 16];
	i--;
	n = n / 16;
	} while (n > 0);

	if (m == 1)
	{
		outbuf[0] = '-';
		++j;
	}
	while (++i < 13)
	{
		outbuf[j++] = outbuf[i];
	}
	outbuf[j] = 0;
	write(1, outbuf, strlen(outbuf));
	return (strlen(outbuf));
}

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
 *@arglist: Args vars
 *Return: character count
 */

int print_octal(va_list arglist)
{
	unsigned int octal = 0, i = 1, num;
	int d, remainder;
	char *octstr;

	num = va_arg(arglist, unsigned int);


	while (num != 0)
	{
		remainder = num % 8;
		num = num / 8;
		octal = octal + (remainder * i);
		i = i * 10;
	}
	octstr = itos(octal);

	write(1, octstr, _strlen(octstr));

	d = _strlen(octstr);

	free(octstr);

	return (d);
}
