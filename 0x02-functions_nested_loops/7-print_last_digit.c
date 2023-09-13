#include "main.h"
/**
 * print_last_digit - prints the last digit of a number typed
 *
 * @n: Number to evaluate
 * Return: Last digit (Success)
 */
int print_last_digit(int n)
{
	if ((n >= 0))
		return (n % 10);
	else
		return (-(n % 10));
}

