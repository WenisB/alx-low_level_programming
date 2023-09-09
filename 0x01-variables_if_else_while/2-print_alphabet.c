#include <stdio.h>
/**
 * main - Entry point prints the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while ((c > 0) && (c <= 'z'))
	{
		putchar(c);
			c++;
	}
	putchar('\n');
}
