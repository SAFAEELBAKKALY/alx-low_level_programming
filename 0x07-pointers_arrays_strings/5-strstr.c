#include "main.h"
#include <stddef.h>
/**
 * _strstr - Write a function that locates a substring
 * @haystack:input
 * @needle:input
 * Return:NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
	char *p1 = needle;

	while (*p1 != '\0' && *p == *p1)
	{
		p++;
		p1++;
	}
	if (*p1 == '\0')
		return (haystack);
	haystack++;
}
return (NULL);
}
