#include <stdio.h>
/**
 * main - prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if ((i == 'e') || (i == 'q'))
		{
		}
		else
		{
			putchar(i);
		}
	putchar('\n');
	return (0);
}
