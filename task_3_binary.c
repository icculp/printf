#include "holberton.h"

/**
* print_bin - prints a signed integer to stdout
* @arglist: Args vars
* Return: Number of chars written
*/

int print_bin(va_list arglist)
{
	unsigned int d, bin;
	int count = 0, tcount = 0, binnum[32];
	char b;

	d = va_arg(arglist, unsigned int);
	if (d == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
	{
		while (d > 0)
		{
			bin = d % 2;
			d /= 2;
			binnum[count] = bin;
			count++;
		}
		tcount = count - 1;
		while (tcount >= 0)
		{
			b = binnum[tcount] + 48;
			write(1, &b, 1);
			tcount--;
		}
	}
	return (count);
}
