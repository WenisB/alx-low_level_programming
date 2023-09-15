#include "main.h"
/**
 * _isdigit - prints whether a given input is digit or not
 * @c: Character to test for
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
