#include "main.h"
/**
 * _islower - Prints weather a letter is lowercase or not
 * @c: Character to check
 *
 * Return: Always 1 (Success);
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
