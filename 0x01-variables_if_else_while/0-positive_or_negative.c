#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*more headers goes there*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 
int main(void)
{
	int n;

	srand(time(0));
	n=rand()-RAND_MAX/2;
	
	/*my code goes here right?*/
	if (n>0)
		printf("%d is positive\n", n);
	if (n==0)
		printf("%d is zero\n", n);
	if (n<0)
		printf("%d is negative\n");

	return (0);
}
