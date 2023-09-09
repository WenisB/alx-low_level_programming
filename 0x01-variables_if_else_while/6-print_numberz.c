#include <stdio.h>
/**
 * main - Entry point prints numbers from 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dgt;

	dgt = 0;
	while (dgt < 10)
	{
		putchar((dgt + '0'));
			dgt++;
	}
	putchar('\n');

	return (0);
}
