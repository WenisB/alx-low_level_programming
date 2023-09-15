#include "main.h"
#include <stdio.h>
/**
 * _isupper - Prints whether an input is uppercase or not
 * @c: the input to evaluate
 *
 * Return: 1 if true and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
		return (1);
	else
		return (0);

}
