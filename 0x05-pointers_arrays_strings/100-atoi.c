#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	char c;
	unsigned int i, j = _strlen(s) - 1;
	int flag = 0, sign = 1, n = 0;

	if (s == "")
		return (0);
	for (i = 0; i <= j; i++)
	{
		c = s[i];
		if (c == '-')
			sign *= -1;
		if (c >= 48 && c <= 57)
		{
			n += c - 48;
			n *= 10;
			flag = 1;
		}
		if (flag == 1)
		{
			if (!(c >= 48 && c <= 57))
				break;
		}
	}
	if (sign == -1)
	{
		n *= -1;
	}
	n /= 10;
	return (n);
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;
	char a;

	for (i = 0; i > -1 ; i++)
	{
		a = s[i];
		if (a == '\0')
			break;
	}
	return (i);
}
