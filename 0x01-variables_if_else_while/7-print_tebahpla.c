#include <stdio.h>
/**
 * main - Entry point prints the alphabets in lower case reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	alph = 'z';
	while (alph >= 'a')
	{
		putchar(alph);
			alph--;
	}
	putchar('\n');

	return (0);
}
