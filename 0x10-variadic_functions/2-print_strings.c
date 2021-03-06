#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints out a string
 * @separator: separator
 * @n: number of parameters
 * @...: n parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	char *str;
	va_list args;

	if (!separator)
		j = 1;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (i != 0 && j == 0)
			printf("%s", separator);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
