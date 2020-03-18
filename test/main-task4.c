#include "holberton.h"
#include <limits.h>

/**
* main - Testing if _printf works
* Return: Success
*/

int main(void)
{
	char c = 'c';
	char *s = "String";
	int i;
	_printf("%characters and %ss, and sometimes a %%.\n", c, s);
	i = _printf("Number is %d, hex is %x upper is %X\n", 125, 125, 125);
	printf("count%d\n", i);


/**	i = _printf("Numbers!:\n %d\n%i\n%d\n%d\n%d\n%d\n%d\n", 'a', 'b', 3.5, 'c', 'd', 2.5, 'e');
	printf("count: %d\n", i);*/
	return (0);
}
