#include "main.h"

/**
 * _memcpy - Write a function that copies memory area
 * @dest:input
 * @src:input
 * @n:input
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest, *p1 = src;

	while (n-- > 0)
	*p++ = *p1++;
		return (dest);
}
