#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: number of times the char should be printed
*/

void print_line(int n)
{
	int nchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (nchr = 1; nchr <= n; nchr++)
			_putchar('_');
		_putchar('\n');
	}
}
