#include "main.h"

/**
 * reverse_array - reverse an array
 *
 * @a: an array of integers
 * @n: the size of the integer array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
