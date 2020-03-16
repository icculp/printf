#include "holberton.h"

/**
* _printf - Functional printf
* @format: Argument formats
* Return: Success
*/

int _printf(const char *format, ...)
{
	va_list arglist;
	int i = 0, count = 0;
	const char *fcopy;
	char c, *s, *tempf;
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
		while (handler[i].type != NULL)
		{
			tempf = fcopy[0];
			if (strcmp(tempf, handler[i].type) == 0)
				count += handler[i].f;
			i++;
		}
	}
	va_end(arglist);
	return (count);
}
