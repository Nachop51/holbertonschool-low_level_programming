#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long x, y, z, a, b, c, d, e, f;
	int n;

	x = 1;
	y = 2;
	printf("1, 2, ");
	for (n = 0; n < 90; n++)
	{
		z = x + y;
		printf("%lu, ", (unsigned long) z);
		x = y;
		y = z;
	}
	a = x / 10000000000;
	b = x % 10000000000;
	c = y / 10000000000;
	d = y % 10000000000;
	for (n = 90; n < 96; n++)
	{
		e = a + c;
		f = b + d;
		if (n == 91 || n == 92 || n == 94 || n == 95)
		{
			f = f - 10000000000;
			e = e + 1;
		}
		if (n != 95)
			printf("%lu%lu, ", (unsigned long) e, (unsigned long) f);
		else
			printf("%lu%lu\n", (unsigned long) e, (unsigned long) f);
		a = c;
		b = d;
		c = e;
		d = f;
	}
	return (0);
}
