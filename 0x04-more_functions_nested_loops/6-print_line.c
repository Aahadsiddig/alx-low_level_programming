#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: number of times the char should be printed
*/

void print_line(int n)
{
	int 1nchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (1nchr = 1; 1nchr <= n; 1nchr++)
			_putchar('_');
		_putchar('\n');
	}
}
