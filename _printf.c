#include "holberton.h"

/**
* _printf - Functional printf
* @format: Argument formats
* Return: Success
*/

int _printf(const char *format, ...)
{
	va_list arglist;
	int i = 0; 
	int *count = 0;
	const char *fcopy;
	const char *temp;
	dtype handler[] = 	{
		{"c", c_function},
		{"s", s_function},
		{"%", modulo_function},
		{NULL, NULL}
				};

	va_start(arglist, format);
	if (format == NULL)
		return (count);
	for (fcopy = format; *fcopy != '\0'; fcopy++)
	{
		while (*fcopy != '%')
		{
			write(1, fcopy, 1);
			fcopy++;
			count++;
			if (*fcopy == '\0')
			{
				va_end(arglist);
				return (count);
			}
		}
		fcopy++;
		count++;
		i = 0;
		while (handler[i].type != NULL)
		{
			temp = handler[i].type;
			while (*fcopy == *temp)
			{
				count += handler[i].f(arglist);
				break;
			}
			i++;
		}
	}
	va_end(arglist);
	write(1, count, 4);
	return (count);

