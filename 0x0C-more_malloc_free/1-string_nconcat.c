#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with at most n bytes of the second string.
 * @s1: a string.
 * @s2: a string.
 * @n: bytes.
 * Return: Pointer to the newly allocated conted string or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int li1 = 0, li2 = 0, conl, i, j;
	char *conted;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[li1])
		li1++;
	while (s2[li2])
		li2++;

	if (n >= li2)
		n = li2;

	conl = li1 + n;

	conted = malloc(sizeof(char) * (conl + 1));
	if (conted == NULL)
		return (NULL);

	for (i = 0; i < li1; i++)
		conted[i] = s1[i];

	i = li1;

	for (j = 0; j < n; j++, i++)
		conted[i] = s2[j];

	conted[i] = '\0';

	return (conted);
}

