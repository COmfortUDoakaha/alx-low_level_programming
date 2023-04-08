#include <stdio.h>
/**
 * main - Print all the numbers of base 16
 *  in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
		putchar(j + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
