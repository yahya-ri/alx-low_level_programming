#include "main.h"

/**
 * _strpbrk - finds first character in str1 that matches str2.
 * @s: character
 * @accept: character
 * Return: return the character.
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return ('\0');
}
