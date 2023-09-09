#include <stdio.h>
/**
 * main - Entry point Prints all combinations of digits from 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar((numb) + '0');
		if (numb == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
