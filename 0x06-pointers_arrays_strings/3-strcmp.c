#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 if matching, and ns1 - ns2 if not matching
 */

int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;

	n = 0;

	while (n == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		n = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (0);
}
