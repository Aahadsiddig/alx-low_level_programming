#include "main.h"

/**
 * reverse_array - function to reverse an array of integers
 *
 * @a: an array of integers
 * @n: the numbers of elements to swap
 *
 * Return:nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
