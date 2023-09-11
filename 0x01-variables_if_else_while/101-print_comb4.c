#include <stdio.h>
/**
 * main - Entry point Prints all combinations of digits from 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;
	int dumb;
	int tomb;

	for (numb = 0; numb < 10; numb++)
	{
		for (dumb = numb + 1; dumb <= 9; dumb++)
		{
			for (tomb = dumb + 1; tomb <= 9; tomb++)
			{
				if ((dumb != numb) && (numb != tomb))
				{
					putchar((numb) + '0');
					putchar ((dumb) + '0');
					putchar ((tomb) + '0');

					if ((numb == 7) && (dumb == 8) && (tomb == 9))
						continue;

		putchar(',');
		putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
