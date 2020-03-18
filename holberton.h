#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

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

/** 0 */
int c_function(va_list);
int s_function(va_list);
int modulo_function(va_list);
int _putchar(char c);

/** 1 */
char *itos(int num);
int print_int(va_list arglist);
int itos_helper(int num);

/** 3 */
int print_bin(va_list arglist);

/** 4 */
int print_unsigned(va_list);

/** 14 */
int rev_string(va_list);

/** 15 */
int rot13_function(va_list);

#endif
