#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of characters to be copied
 * Return: copied
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *s;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	s = malloc(sizeof(char) * n + s1_len + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
