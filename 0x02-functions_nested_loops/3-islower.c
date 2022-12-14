#include "main.h"

/**
 * _islower - checks if the character is lower
 * @c: the Character
 *
 * Return: 1 if character is lower and 0 if not lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
