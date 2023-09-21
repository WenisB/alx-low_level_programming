#include "main.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, j, dgt, dgts, power;
	unsigned int tmp, numchar, number;

	dgt = 0;
	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
	}
	else
	{
		tmp = n;
	}
	number = tmp;

	while (number >= 10)
	{
		number = number / 10;
		dgt++;
	}
	dgts = dgt + 1;
	power = 1;
	i = 1;

	while (i < dgts)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		numchar = (tmp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}
