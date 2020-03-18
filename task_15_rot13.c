#include "holberton.h"

/**
 * rot13_function - converts a string to rot13
 * @arglist: Args vars
 * Return: character count
 */

int rot13_function(va_list arglist)
{
	char *rot;
	char start[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char swap[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char new[1000];
	int i, n, count;

	rot = va_arg(arglist, char *);

	if (rot == NULL)
		rot = "(nill)";

	for (i = 0; rot[i] != '\0'; i++)
	{
		for (n = 0; start[n] != '\0'; n++)
		{
			if (rot[i] == start[n])
			{
				new[i] = swap[n];
				count++;
				break;
			}
		}
	}
	write(1, new, _strlen(new));
	return (count);
}
