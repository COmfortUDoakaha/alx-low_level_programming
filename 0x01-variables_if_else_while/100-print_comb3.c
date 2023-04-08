#include <stdio.h>
/**
 * main - Print different combination of two digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int e, q;

	for (e = '0'; e < '9'; e++)
	{
		for (q = 0 + 1; q <= 9; q++)
		{
			putchar(e);
			putchar(q);

			if (e == '8' && q == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
