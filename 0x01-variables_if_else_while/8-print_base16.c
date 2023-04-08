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

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	for (j = 0; j <= 9; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}
