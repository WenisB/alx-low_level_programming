#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be evaluated
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int lastn = n % 10;

	if  (lastn < 0)
		lastn *= -1;

	_putchar(lastn + '0');

	return (0);
}
