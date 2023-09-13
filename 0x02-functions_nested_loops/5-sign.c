#include "main.h"
/**
 * print_sign - Prints the sign of a number, 1 if n is > than 0, 0 if n is 0
 * and -1 if n is < 0
 * @n: number to check
 *
 * Return: Always 1 (Success) or either 0 or - 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
