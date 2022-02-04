#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints out a value depending on the number
 *
 * Return: no error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int r = n;

	if (r > 0)
	{
		printf("%d is positive\n", r);
	}
	else if (r == 0)
	{
		printf("%d is zero\n", r);
	}
	else
	{
		printf("%d is negative\n", r);
	}
	return (0);
}
