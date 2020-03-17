#include "holberton.h"

/**
* c_function - How to handle char types
* @arglist: Args vars
* Return: 1
*/

int c_function(va_list arglist)
{
	char c;

	c = va_arg(arglist, int);
	write(1, &c, 1);
	return (1);
}

/**
* s_function - How to handle string types
* @arglist: Args vars
* Return: Number of chars written
*/

int s_function(va_list arglist)
{
	char *s = va_arg(arglist, char *);

	if (s == NULL)
{
		write(1, "(null)", 6);
		return (6);
	}
	return (write(1, s, _strlen(s)));
}

/**
* modulo_function - Prints a modulus
* @arglist: Args vars
* Return: 1
*/

int modulo_function(va_list arglist)
{
	(void)arglist;

	return (write(1, "%", 1));
}
