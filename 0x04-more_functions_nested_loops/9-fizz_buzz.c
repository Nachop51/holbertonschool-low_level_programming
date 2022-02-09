#include <stdio.h>

/**
 * main - Fizz Buzz game
 *
 * Return: no error
 */
int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", i);
			}
		}
		if (i != 100)
		{
		printf(" ");
		}
	}
	return (0);
}
