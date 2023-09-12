#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: Always void (Success)
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int count;

	count = 0;
	while (count < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}

		_putchar('\n');
		count++;
	}

}
