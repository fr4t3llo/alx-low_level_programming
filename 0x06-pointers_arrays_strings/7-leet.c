#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: a string
 * Return: the new string
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char *ch = "aeotl43071";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (ch[j] == str[i] || str[i] == ch[j] - 32)
			{
				str[i] = ch[j + 5];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
