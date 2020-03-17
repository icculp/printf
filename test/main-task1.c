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
_printf("I am printing a % %tring full of %characters and %ss, and sometimes a %%.\n", c, s);
	i = _printf("Number is %d, other numb is %i. %d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", INT_MAX, INT_MIN, -534, -2030, -1000000000, 100, 435, 1000000000, 0, 1, -1, 3.5, 'a');
	printf("count%d\n", i);


	i = _printf("Numbers!:\n %d\n%i\n%d\n%d\n%d\n%d\n%d\n", 'a', 'b', 3.5, 'c', 'd', 2.5, 'e');
	printf("count: %d\n", i);
	return (0);
}
