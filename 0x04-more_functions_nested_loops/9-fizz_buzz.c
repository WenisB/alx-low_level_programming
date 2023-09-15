#include <stdio.h>
/**
 * main - function that checks for uppercase character.
 * Return: 0
 */
int main(void)
{
	int f = 1;

	while (f <= 100)
	{
		if (f % 3 == 0 && f % 5 == 0)
			printf("FizzBuzz ");
		else if (f % 5 == 0)
		{
			if (f == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (f % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", f);
		f++;
	}
	return (0);
}
