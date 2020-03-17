#include "holberton.h"

/**
 * int_to_binary - converts a decimal to binary
 * @binum: Num to convert to binary
 * Return: Binary number in long format
 */

unsigned int_to_binary(unsigned int binum)
{
	unsigned int binary = 0, count, r, t = 1;

	count = 0;
	while (binum != 0)
	{
		r = binum % 2;
		binum = binum / 2;
		binary = binary + (r * t);
		t = t * 10;
		count++;
	}
	return (binary);
}

/**
* print_bin - prints a signed integer to stdout
* @arglist: Args vars
* Return: Number of chars written
*/

int print_bin(va_list arglist)
{
	unsigned int d, bin;
	char *b;

	d = va_arg(arglist, unsigned int);
	bin = int_to_binary(d);
	b = bintos(bin);
	write(1, b, _strlen(b));
	d = _strlen(b);
	free(b);
	return (d);
}

/**
* bintos - Converts int to string
* @num: Number to be convered
* Return: Buffer containing string
*/

char *bintos(unsigned int num)
{
	unsigned int rem, len = 0, n;
	char *s;
	int i;

	if (num == 0)
	{
		len++;
	}
	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	n = num;
	for (i = len - 1; i >= 0; i--)
	{
		rem = n % 10;
		n = n / 10;
		s[i] = rem + '0';
	}
/**	if (num < 0)
		s[0] = '-';*/
	s[len] = '\0';
	return (s);
}
