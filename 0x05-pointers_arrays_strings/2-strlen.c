#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: the input st
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
