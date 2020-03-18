#include "holberton.h"

/**
* _printf - Functional printf
* @format: Argument formats
* Return: Success
*/

int _printf(const char *format, ...)
{
	va_list arglist;
	int ct = 0;
	dtype handler[] =	{
		{"c", c_function},
		{"s", s_function},
		{"%", modulo_function},
		{"i", print_int},
		{"d", print_int},
		{"b", print_bin},
		{"r", rev_string},
		{"R", rot13_function},
		{"u", print_unsigned},
		{"o", print_octal},
		{NULL, NULL}
				};

	if (format == NULL)
		return (-1);
	va_start(arglist, format);
	ct = heavy_lifter(arglist, format, ct, handler);
	va_end(arglist);
	return (ct);
}
