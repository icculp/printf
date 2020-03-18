#include "holberton.h"




/**
* heavy_lifter - Refactored _printf heavy lifter
* @arglist: Args vars
* @format: Argument formats
* @ct: Count of chars written
* @handler: Struct array of our function pointers
* Return: Count
*/

int heavy_lifter(va_list arglist, const char *format, int ct, dtype handler[])
{
	int i = 0, tempcount = 0;
	const char *fcopy, *temp;

	if (format == NULL)
		return (ct);
	for (fcopy = format; *fcopy != '\0'; fcopy++)
	{
		while (*fcopy != '%')
		{
			write(1, fcopy, 1);
			fcopy++, ct++;
			if (*fcopy == '\0')
			{
				va_end(arglist);
				return (ct);
			}
		}
		if (*(fcopy + 1) == '\0')
			exit(-1);
		fcopy++, i = 0,	tempcount = ct;
		while (handler[i].type != NULL)
		{
			temp = handler[i].type;
			while (*fcopy == *temp)
			{
				ct += handler[i].f(arglist);
				tempcount = 98;/** To avoid next loop */
				break;
			}
			i++;
		}
		while (handler[i].type == NULL && (tempcount == ct))
		{
			write(1, "%", 1);
			ct++, fcopy--;
			break;
		}
	}
	return (ct);
}
