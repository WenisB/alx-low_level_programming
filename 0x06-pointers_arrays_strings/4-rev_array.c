#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int rev, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		rev = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
