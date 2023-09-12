#include "main.h"
/**
 * print_alphabet - Prints the alphabets a-z
 *
 * Return:  Always void
 *
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}

