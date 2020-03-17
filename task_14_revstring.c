#include "holberton.h"

/**
 * rev_string - prints a reversed string.
 * @arglist: Args vars
 * Return: reversed string.
 */

int rev_string(va_list arglist)
{
	char *s;
	int i = 0;
	int j;

	s = va_arg(arglist, char *);

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	for (j = 0; j < i; j++)
	{
		_putchar(*s);
		s--;
	}
}
/**
 *_putchar - writes character c to stdout
 *@c: the char to print
 *Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
