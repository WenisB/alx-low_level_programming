#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of program
 * @argc: First argument
 * @argv: Second argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}

}
