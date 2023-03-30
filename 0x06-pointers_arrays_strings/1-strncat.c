#include "main.h"

/**
 * _strncat - appends the src string
 * to the dest string
 *
 * @src: a string to copy from
 * @dest: a string to append to
 * @n: number of characters to copy
 * Return: dest appended with the content
 * of src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
