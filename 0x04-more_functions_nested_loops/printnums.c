#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints 0-9 numbers and a new line
 *
 * Return: void
 */
int main(void)
{
	int c = 0;
	
	while (c <= 9)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");
	
	return (0);
}
