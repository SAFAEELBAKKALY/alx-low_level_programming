#include "main.h"
#include <string.h>

/**
 * _strcpy - write a func that copie the string pointed to by src,
 * including the terminating null byte \0, to the buffer pointed to by dest
 *
 * @dest: input
 * @src: input
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
