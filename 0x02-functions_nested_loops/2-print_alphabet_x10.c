#include "main.h"

/**
 * main - prints the alpha 10 times
 */
void print_alphabet_x10(void)
{
	char x;

	for (int i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);

			_putchar('\n');
	}
}

