#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 in the lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; i <= 122; i++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
