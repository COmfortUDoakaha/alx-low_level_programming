#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last six digit of a randomly generated number
 * whether it is greater than 5, less than 6 and not 0, or 0
 *
 * Return: Always 0
*/
int main(void)
{
	int n;
	int n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n % 10;
	if (n1 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n1);
	if (n1 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n1);
	if (n1 < 6 && n1 != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n1);
	return (0);
}
