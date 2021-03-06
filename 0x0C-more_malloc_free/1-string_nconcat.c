#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings in n bytes
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes
 *
 * Return: string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, x = 0, a = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
	{
		n = j;
	}
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		str[x] = s1[x];
	for (; x < (n + i); x++, a++)
		str[x] = s2[a];
	str[x] = '\0';
	return (str);
}
