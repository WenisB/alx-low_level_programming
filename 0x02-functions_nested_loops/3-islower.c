#include "main.h"
/**
 * islower - Prints weather a letter is lowercase or not
 *
 * Return: Always 1 (Success);
 */

int islower (int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return 1;
	else
		return 0;
}
