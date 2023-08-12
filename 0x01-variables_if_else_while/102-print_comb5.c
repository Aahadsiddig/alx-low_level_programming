#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int firstDigit = 0, secDigit;

	while (firstDigit <= 99)
	{
		secDigit = firstDigit;
		while (secDigit <= 99)
		{
			if (secDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secDigit / 10) + 48);
				putchar((secDigit % 10) + 48);

				if (firstDigit != 98 || secDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
