#include "holberton.h"

/**
 *dec_to_binary - converts a decimal to binary
 *
 *
 *
 *
 */

long dec_to_binary(int dnum)
{
	long binary = 0;
/*	int dnum;*/
	int count, r, t = 1;

/*	dnum = va_arg(arglist, unsigned int);*/
	count = 0;
	while (dnum != 0)
	{
		r = dnum % 2;
		dnum = dnum / 2;
		binary = binary + (r * t);
		t = t * 10;
		count++;
	}
	return (binary);
}

int main()
{
	int a = 234;

	printf("%ld", dec_to_binary(a));

	return 0;
}
