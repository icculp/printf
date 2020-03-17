#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *signed_int - prints a signed integer to stdout
 *
 *@arglist:
 *Return: writes the integer to stdout
 */
void inttostring(char str[], int num);
int signed_int(va_list arglist)
{
	int d;
	char *b;

	d = va_arg(arglist, int);

	inttostring(b, d);

	write(1, b, _strlen(b));
}
void inttostring(char str[], int num)
{
	int i, rem, len = 0, n;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i - 1)] = rem + '0';
	}
	str[len] = '\0';

}
