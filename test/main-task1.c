#include "holberton.h"

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
	i = _printf("Number is %b.", 98);
	printf("count%d\n", i);
	return (0);
}
