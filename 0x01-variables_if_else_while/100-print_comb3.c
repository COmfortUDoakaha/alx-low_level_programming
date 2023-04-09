#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print all possible different
 * combination of two digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, p;

	for (d = '0'; d <= '8'; d++)
	{
		for (p = d + 1; p <= 9; p++)
		{
			if (p != d)
			{
				putchar(d);
				putchar(p);
				if (d == '8' && p == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
