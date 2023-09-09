#include <stdio.h>
/**
 * main - Entry point prints the alphabets in lower case except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while ((c > 0) && (c <= 'z'))
	{
		if ((c != 'e') && (c != 'q'))
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
