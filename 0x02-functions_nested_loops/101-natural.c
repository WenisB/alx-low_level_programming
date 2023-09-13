#include <stdio.h>
/**
 * main - prints all natural numbers
 *that are multiples of 5 or 3
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
