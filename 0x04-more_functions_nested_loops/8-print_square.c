#include "main.h"
#include <stdio>

/**
 * print_square - prints a square using the char #
 *
 * @size: the size of the square
 *
 * Return: always 0 (success)
*/

void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
