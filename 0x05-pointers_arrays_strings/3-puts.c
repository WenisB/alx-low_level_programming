#include "main.h"

/**
 * _puts - puts in charactres
 * @str: string to put
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
