#include "holberton.h"

/**
* _printf - Functional printf
* @format: 
*/

int _printf(const char *format, ...)
{
	va_list arglist;
	int i;
	const char *fcopy;
	char c;
	char *s;

	va_start(arglist, format);

	if (format == NULL)
		return;

	for (fcopy = format; *fcopy != '\0'; fcopy++)
	{
		while(*fcopy != '%')
		{
			write(1, fcopy, 1);
			fcopy++;
			if (*fcopy == '\0')
			{
				va_end(arglist);
				return (0);
			}
		}
		fcopy++;
		switch(*fcopy)
		{
			case 'c':
				c = va_arg(arglist, int);
				write(1, &c, 1);
				break;
			case 's':
				s = va_arg(arglist, char *);
				write(1, s, _strlen(s));
				break;
			case '%':
				write(1, "%", 1);
				break;
			default:
				break;
		}
	}
	va_end(arglist);
	return (0);
}
