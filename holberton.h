#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
* struct dtype - Struct for data types
* @type: Type of char
* @f: function pointer for each type
*/

typedef struct dtype
{
	char *type;
	int (*f)(va_list);
} dtype;

int _strlen(char *s);
int _printf(const char *format, ...);
int heavy_lifter(va_list arglist, const char *format, int ct, dtype handler[]);

int c_function(va_list);
int s_function(va_list);
int modulo_function(va_list);
int rev_string(va_list);
int _putchar(char c);

#endif
