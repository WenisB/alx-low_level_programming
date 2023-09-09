#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point States weather a number is greater that 5,
 * less than 6 and not zero, or 0
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int i;

	if (n < 0)
		n = n * (-1);

	i = n % 10;

	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	else if ((i < 6) && (i != 0))
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, i);
	else
		printf("Last digit of %d is %d and is zero\n", n, i);

	return (0);
}
