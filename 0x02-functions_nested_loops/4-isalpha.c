#include "main.h"
/**
 * _isalpha - Prints weather a letter is lowercase or not
 * @c: Character to check
 *
 * Return: Always 1 (Success);
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
