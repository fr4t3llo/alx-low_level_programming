#include "main.h"

/**
 * string_toupper - from lowercase
 * to uppercase
 *
 * @str: a string
 * Return: the new string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
