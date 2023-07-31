#include "main.h"

/**
 * _strspn - will return the length of a substring.
 * @s: character
 * @accept: character.
 * Return: return count.
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int found = 1;

	while (*s && found)
	{
		found = 0;
		while (*a)
		{
			if (*s == *a)
			{
			found = 1;
			break;
			}
			a++;
		}
		if (found)
		{
			count++;
			s++;
		}
	}

	return (count);
}
