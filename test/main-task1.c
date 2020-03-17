#include "holberton.h"
#include <limits.h>

/**
* main - Testing if _printf works
* Return: Success
*/

int main(void)
{
/*har c = 'c';
	char *s = "String";*/
	int i;
/* = _printf("I am printing a % %tring full of %characters and %ss, and sometimes a %%.", c, s);*/
	i = _printf("Number is %d, other numb is %i. %d\n%d\n%d\n%d\n%d\n%d\n", INT_MAX, INT_MIN, -534, -2030, -1000000000, 100, 435, 1000000000);
	printf("count%d\n", i);
	return (0);
}
