#include "main.h"

/**
 * print_line - prints a straigt line n times
 *@n: munber of lines to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
