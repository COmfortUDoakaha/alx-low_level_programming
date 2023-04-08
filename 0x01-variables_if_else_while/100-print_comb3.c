#include <stdio.h>
/**
 * main - Print different combination of two digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, q;

	for (c = '0'; c < '9'; c++)
	{
		for (q = c + 1; q <= 9; q++)
		{
			putchar(c);
			putchar(q);

			if (c == '8' && q == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

