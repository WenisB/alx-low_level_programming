#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: the value of the integer
 */

int _atoi(char *s)
{
	int res = 0;

	for (int i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (res);
}
