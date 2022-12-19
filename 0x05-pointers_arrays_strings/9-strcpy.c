#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * *_strcpy - copies string
 * @dest: destination
 * @src: source
 *
 * Return: string of characters
 */

char *_strcpy(char *dest, char *src)
{
	int lnt = 0;

	while (*(src + lnt) != '\0')
	{
		*(dest + lnt) = *(src + lnt);
		lnt++;
	}
	*(dest + lnt) = '\0';
	return (dest);
}
