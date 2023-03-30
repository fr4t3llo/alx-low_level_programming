#include "main.h"

/**
 * _strncpy - copy n characters
 * from src string
 * to the dest string
 *
 * @src: a string to copy from
 * @dest: a string to append to
 * @n: number of characters to copy
 * Return: dest appended with the content
 * of src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
