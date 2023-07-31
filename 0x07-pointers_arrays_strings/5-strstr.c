#include "main.h"


/**
 * _strstr - will locate a substring.
 * @haystack: string.
 * @needle: string.
 * Return: return the substring.
 */

char *_strstr(char *haystack, char *needle)
{

	char *ptr1;
	char *ptr2;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
	ptr1 = haystack;
	ptr2 = needle;

		while (*ptr2 && *ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}

		if (*ptr2 == '\0')
		{
			return (haystack);
		}

	haystack++;
	}

	return (0);
}
