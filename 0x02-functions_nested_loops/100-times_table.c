#include "main.h"

/**
 * print_times_table - prints tables
 * @n: number
 */
void print_times_table(int n)
{
	if (n >= 0 && n < 16)
	{
		int x, y, result;

		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				result = x * y;
				if (result < 10)
				{
					if (y != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(result + '0');
				}
				else if (result > 9 && result < 100)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(result / 100 + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
