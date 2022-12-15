#include "main.h"

/**
 * _isupper - checks if a parameter is an uppercase character
 * @c: charater input
 *
 * Return: 1 if upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
