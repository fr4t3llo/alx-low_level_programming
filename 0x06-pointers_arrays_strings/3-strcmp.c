#include "main.h"

/**
 * _strcmp - compares the strings
 * s1 with s2
 *
 * @s1: a string
 * @s2: a string
 * Return: integer greater than, equal to, or less than 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
