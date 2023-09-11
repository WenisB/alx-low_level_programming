#include <stdio.h>
/**
 * main - Entry point Prints all combinations of digits from 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;
	int i;

	for (numb = 0; numb < 10; numb++)
	{
		for (i = numb + 1; i <= 9; i++)
		{
			if (i != numb)
			{
				putchar((numb) + '0');
				putchar ((i) + '0');
		putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
