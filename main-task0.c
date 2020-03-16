#include "holberton.h"

/**
* main - Testing if _printf works
* Return: Success
*/

int main(void)
{
	char c = 'c';
	char *s = "String";
	
	_printf("I am printing a string full of %characters and %ss, and sometimes a %%.", c, s);
	return (0);
}
