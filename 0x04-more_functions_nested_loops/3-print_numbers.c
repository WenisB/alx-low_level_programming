#include "main.h"
/**
 * print_numbers - prints 0-9 numbers and a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
