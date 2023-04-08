#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase
 * and in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxz";
	char alp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; i <= 26; i++)
	{
		putchar(alp[i]);
	}
	for (j = 0; j <= 26; j++)
	{
		putchar(alp[j]);
	}
	putchar('\n');
	return (0);
}

