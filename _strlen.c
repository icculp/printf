#include "holberton.h"

/**
* _strlen - Finds the stringlength of a string
* @s: String to take in (char *)
* Return: Length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
