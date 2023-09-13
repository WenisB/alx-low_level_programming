#include "main.h"
/**
 * print_last_digit - prints the last digit of a number typed
 *
 * @n: Number to evaluate
 * Return: Last digit (Success)
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if ((i >= 0))
	{
		_putchar((i + '0'));
		return (i);
	}
	else
	{
		_putchar(-i + '0');
		return (-i);
	}
}

