#include <stdio.h>

/**
 * main - entry - point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, result;
	int count;

	for (count = 0; count < 96; count++)
	{
		result = num1 + num2;
		num1 = num2, num2 = result;

		printf("%lu", result);
		if (count != 95)
			putchar(44), putchar(32);
	}
	putchar(10);
	return (0);
}
